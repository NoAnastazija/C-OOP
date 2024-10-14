/*#include <iostream>
#include <vector>
#include "VectorUtil.h"

using namespace std;

int main() {
    // Previous main function
    vector<Point> listPoints;
    cout << " --- Default generator of 3 objects --- " << endl;
    fillDefault(listPoints, 3);
    print(listPoints);

    vector<float> listFloats = {1.1f, 2.2f, 3.3f};
    vector<float> listFloats2 = reverse(listFloats);
    cout << " --- Reverse: --- " << endl;
    print(listFloats2);

    cout << " --- To int vector: --- " << endl;
    print(toInt(listPoints));

    vector<std::string> listStrings = {"2", "asd", "34"};
    cout << " --- To int vector: --- " << endl;
    print(toInt(listStrings));

    vector<int> listInt;
    cout << " --- Default generator of 3 objects --- " << endl;
    fillDefault(listInt, 3);
    print(listInt);

    // New functionalities
    // Example usage of removeElements function
    vector<int> originalVec = {1, 2, 3, 4, 5};
    unsigned int index1 = 1;
    unsigned int index2 = 3;
    try {
        vector<int> resultVec = removeElements(originalVec, index1, index2);
        cout << "Original vector: ";
        print(originalVec);
        cout << "After removing elements between index " << index1 << " and index " << index2 << ": ";
        print(resultVec);
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    // Example usage of mergeVectors function
    vector<vector<int>> vecOfVecs = {{1, 2, 3}, {4, 5}, {6, 7}};
    vector<int> mergedVec = mergeVectors(vecOfVecs);
    cout << "Merged vector: ";
    print(mergedVec);

    return 0;
}

*/
#include <iostream>
#include <vector>
#include "VectorUtil.h"

using namespace std;

int main() {
    // Previous main function
    vector<Point> listPoints;
    cout << " --- Default generator of 3 objects --- " << endl;
    fillDefault(listPoints, 3);
    print(listPoints);

    vector<float> listFloats = {1.1f, 2.2f, 3.3f};
    vector<float> listFloats2 = reverse(listFloats);
    cout << " --- Reverse: --- " << endl;
    print(listFloats2);

    cout << " --- To int vector: --- " << endl;
    print(toInt(listPoints));

    vector<std::string> listStrings = {"2", "asd", "34"};
    cout << " --- To int vector: --- " << endl;
    print(toInt(listStrings));

    vector<int> listInt;
    cout << " --- Default generator of 3 objects --- " << endl;
    fillDefault(listInt, 3);
    print(listInt);

    // New functionalities
    // Example usage of removeElements function
    vector<int> originalVec = {1, 2, 3, 4, 5};
    unsigned int index1 = 1;
    unsigned int index2 = 3;
    try {
        vector<int> resultVec = removeElements(originalVec, index1, index2);
        cout << "Original vector: ";
        print(originalVec);
        cout << "After removing elements between index " << index1 << " and index " << index2 << ": ";
        print(resultVec);
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    // Example usage of mergeVectors function
    vector<vector<int>> vecOfVecs = {{1, 2, 3}, {4, 5}, {6, 7}};
    vector<int> mergedVec = mergeVectors(vecOfVecs);
    cout << "Merged vector: ";
    print(mergedVec);

    // Example usage of removeSubVectors function
    vector<vector<int>> vecOfVecsToRemove = {{2, 3}, {1, 1, 2}, {2, 3}, {7, 8}};
    vector<int> subVecToRemove = {2, 3};
    vector<vector<int>> resultVecOfVecs = removeSubVectors(vecOfVecsToRemove, subVecToRemove);
    cout << "Original vector of vectors: ";
    print(vecOfVecsToRemove);
    cout << "After removing subvector [2, 3]: ";
    print(resultVecOfVecs);

    return 0;
}



