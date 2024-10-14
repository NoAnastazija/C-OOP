#ifndef NALOGA0701_NEW_VECTORUTIL_H
#define NALOGA0701_NEW_VECTORUTIL_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdexcept>
#include <random>
#include <ctime>
#include <algorithm>
#include "Point.h"

using namespace std;

/* Šablono funkcije fillDefault, ki prejme vektor in n (int)
 * kot argument ter ga napolni z n-objekti (klic privzetega
 * konstruktorja).*/
template <typename T>
void fillDefault(vector<T>& vec, int n) {
    for (int i = 0; i < n; ++i) {
        vec.push_back(T());
    }
}

template <typename T>
void print(vector<T>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ' ';
    }
    cout << endl;
}

// Šablono funkcije print, ki prejme vektor in ga izpiše.))
template <typename T>
void print(const vector<T>& novVector) {
    cout << "[ ";
    for (const auto& element : novVector) {
        cout << element << " ";
    }
    cout << "]" << endl;
}


/*
 * Šablono funkcije reverse, ki prejme vektor kot argument
 * in vrne vektor z obratnim vrstnim redom
 * (ni dovoljena uporaba knjižnic kot npr. std::reverse).
 */
/*
template <typename T>
vector<T> reverse(const vector<T>& reverseVector) {
    vector<T> reversedVector;
    // rbegin .> last element of reversed
    // rend -> one position before first element
    for (auto it = reverseVector.rbegin(); it != reverseVector.rend(); ++it) {
        // adds the element pointed to by it to reversedVector
        reversedVector.push_back(*it);
    }
    return reversedVector;
}*/

template <typename T>
vector<T> reverse(const vector<T>& reverseVector) {
    vector<T> reversedVector;
    for (auto it = reverseVector.end(); it != reverseVector.begin(); ) {
        --it; // Decrement the iterator before dereferencing
        reversedVector.push_back(*it);
    }
    return reversedVector;
}

template <typename T>
vector<int> toInt(const vector<T>& inputVector) {
    vector<int> intVector;
    for (const auto& element : inputVector) {
        try {
            if constexpr (is_same_v<T, Point>) {
                stringstream ss;
                ss << element;
                string elementStr = ss.str();
                cerr << "Exception: stoi for " << elementStr << endl;

                intVector.push_back(-1);
            } else {

                stringstream ss;
                ss << element;
                string elementStr = ss.str();
                int intValue = stoi(elementStr);
                intVector.push_back(intValue);
            }
        } catch (const invalid_argument&) {
            cerr << "Invalid argument: unable to convert '" << element << "' to int" << endl;
        }
    }
    return intVector;
}
/*
template <typename T>
vector<int> toInt(const vector<T>& inputVector) {
    vector<int> intVector;
    for (const auto& element : inputVector) {
        try {
            // Check if the element is of type Point
            if constexpr (is_same_v<T, Point>) {
                // Convert Point to a string representation
                stringstream ss;
                ss << element;
                string elementStr = ss.str();

                // Print custom exception message for Point objects
                cerr << "Exception: stoi for " << elementStr << endl;
                // Push a placeholder value to keep vector size consistent
                intVector.push_back(-1); // Or any other value to indicate the failure
            } else {
                // Convert other types to int
                stringstream ss;
                ss << element;
                string elementStr = ss.str();
                int intValue = stoi(elementStr);
                intVector.push_back(intValue);
            }
        } catch (const invalid_argument&) {
            // Print the generic exception message for non-numeric strings
            cerr << "Invalid argument: unable to convert '" << element << "' to int" << endl;
        }
    }
    return intVector;
}


// Specialization for Point class
template <>
vector<int> toInt<Point>(const vector<Point>& inputVector) {
    vector<int> intVector;
    for (const auto& point : inputVector) {
        // Convert Point to a string representation
        stringstream ss;
        ss << point;
        string elementStr = ss.str();

        // Print the custom exception message for Point objects
        cerr << "Exception: stoi for " << elementStr << endl;
        // Push a placeholder value to keep vector size consistent
        intVector.push_back(-1); // Or any other value to indicate the failure
    }
    return intVector;
}
*/
template <typename T>
vector<T> removeElements(const vector<T>& vec, unsigned int index1, unsigned int index2) {
    if (index1 >= vec.size() || index2 >= vec.size()) {
        throw out_of_range("Indices are out of range");
    }

    vector<T> result;
    for (unsigned int i = 0; i < vec.size(); ++i) {
        if (i < index1 || i > index2) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

template <typename T>
vector<T> mergeVectors(const vector<vector<T>>& vecOfVecs) {
    vector<T> mergedVector;
    for (const auto& vec : vecOfVecs) {
        mergedVector.insert(mergedVector.end(), vec.begin(), vec.end());
    }
    return mergedVector;
}

template <typename T>
vector<vector<T>> removeSubVectors(const vector<vector<T>>& vecOfVecs, const vector<T>& subVec) {
    vector<vector<T>> result;
    for (const auto& vec : vecOfVecs) {
        if (vec != subVec) {
            result.push_back(vec);
        }
    }
    return result;
}

template <>
void fillDefault<int>(vector<int>& vec, int n) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < n; ++i) {
        vec.push_back(dis(gen));
    }
}

// Additional print function to handle vectors of vectors
template <typename T>
void print(const vector<vector<T>>& vecOfVecs) {
    cout << "[ ";
    for (const auto& vec : vecOfVecs) {
        cout << "[ ";
        for (const auto& element : vec) {
            cout << element << " ";
        }
        cout << "] ";
    }
    cout << "]" << endl;
}

#endif //NALOGA0701_NEW_VECTORUTIL_H
