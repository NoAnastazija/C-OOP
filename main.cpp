#include <iostream>
#include <vector>
#include <stdexcept>
#include "Matrix.h"
using namespace std;



int main() {
    Matrix<int> matrixA(2, 3);
    matrixA.setData({{1, 2, 3}, {4, 5, 6}});
    cout << "A:\n" << matrixA << endl;

    Matrix<int> matrixB(2, 3);
    cout << "B:\n" << matrixB << endl;
    cout << "B with postfix:\n" << matrixB++ << endl;
    cout << "B with prefix:\n" << ++matrixB << endl;

    // ++
    Matrix<int> matrixC = matrixA + matrixB;
    cout << "addition:\n" << matrixC << endl;

    // --
    Matrix<int> matrixD = matrixA - matrixB;
    cout << "subtraction:\n" << matrixD << endl;


    Matrix<int> matrixF(2, 3);
    matrixF.setData({{1, 2, 3}, {4, 5, 6}});
    cout << "F:\n" << matrixF << endl;

    // operator*
    Matrix<int> matrixG = matrixF * 10;
    cout << "G:\n" << matrixG << endl;

    // operator==
    if (matrixF == matrixG) {
        cout << "F and G are equal\n";
    } else {
        cout << "F and G are not equal\n";
    }
    return 0;
}