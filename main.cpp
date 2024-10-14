#include "VectorUtil.h"

int main() {
    using namespace std::string_literals;
    system(("chcp "s + to_string(65001)).c_str());

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> toRemove = {3, 6, 9};

    // Demonstrate printColor
    VectorUtil::printColor(vec);
    VectorUtil::printColor(vec, ColorCode::Red);

    // Demonstrate slice
    vector<vector<int>> sliced = VectorUtil::slice(vec, 3);
    for (const auto& part : sliced) {
        VectorUtil::printColor(part, ColorCode::Blue);
    }

    // Demonstrate removeElements
    VectorUtil::removeElements(vec, toRemove);
    VectorUtil::printColor(vec, ColorCode::Magenta);

    // Demonstrate subVector
    try {
        vector<int> subVec = VectorUtil::subVector(vec, 1, 4);
        VectorUtil::printColor(subVec, ColorCode::Cyan);
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    // Demonstrate reverse
    vector<int> reversedVec = VectorUtil::reverse(vec);
    VectorUtil::printColor(reversedVec, ColorCode::Default);

    // Demonstrate removeDuplicates
    vector<int> vec2 = {8, 8,  2, 1, 4, 1, 5, 2};

    // Print original vector
    cout << "Original vector:" << endl;
    VectorUtil::printColor(vec2);

    // Remove duplicates
    vector<int> uniqueVec = VectorUtil::removeDuplicates(vec2);

    // Print vector without duplicates
    cout << "Vector with duplicates removed:" << endl;
    VectorUtil::printColor(uniqueVec, ColorCode::Green);

    return 0;
}