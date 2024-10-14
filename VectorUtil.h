//
// Created by nogra on 13/06/2024.
//

#ifndef NALOGA0702_VECTORUTIL_H
#define NALOGA0702_VECTORUTIL_H
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

enum class ColorCode {
    Black    = 30,
    Red      = 31,
    Green    = 32,
    Blue     = 34,
    Magenta  = 35,
    Cyan     = 36,
    Default  = 39
};

class VectorUtil {
public:
    template <typename T>
    static void printColor(const vector<T>& vec, ColorCode color = ColorCode::Green);

    template <typename T>
    static vector<vector<T>> slice(const vector<T>& vec, size_t n);

    template <typename T>
    static void removeElements(vector<T>& vec1, const vector<T>& vec2);

    template <typename T>
    static vector<T> subVector(const vector<T>& vec, size_t index1, size_t index2);

    template <typename T>
    static vector<T> reverse(const vector<T>& vec);

    template <typename T>
    static vector<T> removeDuplicates(const vector<T>& vec);
};

template <typename T>
void VectorUtil::printColor(const vector<T>& vec, ColorCode color) {
    cout << "\033[" << static_cast<int>(color) << "m";
    for (const auto& item : vec) {
        cout << item << " ";
    }
    cout << "\033[0m" << endl;
}

template <typename T>
vector<vector<T>> VectorUtil::slice(const vector<T>& vec, size_t n) {
    vector<vector<T>> result;
    for (size_t i = 0; i < vec.size(); i += n) {
        vector<T> part(vec.begin() + i, vec.begin() + min(i + n, vec.size()));
        result.push_back(part);
    }
    return result;
}

template <typename T>
void VectorUtil::removeElements(vector<T>& vec1, const vector<T>& vec2) {
    vec1.erase(remove_if(vec1.begin(), vec1.end(), [&vec2](const T& item) {
        return find(vec2.begin(), vec2.end(), item) != vec2.end();
    }), vec1.end());
}

template <typename T>
vector<T> VectorUtil::subVector(const vector<T>& vec, size_t index1, size_t index2) {
    if (index1 >= vec.size() || index2 >= vec.size() || index1 > index2) {
        throw invalid_argument("Invalid index range");
    }
    return vector<T>(vec.begin() + index1, vec.begin() + index2 + 1);
}

template <typename T>
vector<T> VectorUtil::reverse(const vector<T>& vec) {
    vector<T> reversed(vec.rbegin(), vec.rend());
    return reversed;
}

template <typename T>
vector<T> VectorUtil::removeDuplicates(const vector<T>& vec) {
    vector<T> result;
    for (const auto& item : vec) {
        if (find(result.begin(), result.end(), item) == result.end()) {
            result.push_back(item);
        }
    }
    return result;
}

#endif //NALOGA0702_VECTORUTIL_H
