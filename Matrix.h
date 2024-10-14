//
// Created by nogra on 27/05/2024.
//

#ifndef NALOGA0901_MATRIX_H
#define NALOGA0901_MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template<typename T>
class Matrix {
    friend ostream& operator<<(ostream& os, const Matrix<T>& matrix) {
        for (const auto& row : matrix.data) {
            for (const auto& element : row) {
                os << element << " ";
            }
            os << "\n";
        }
        return os;
    }

private:
    vector<vector<T>> data;
    unsigned int rows;
    unsigned int cols;

public:
    Matrix(unsigned int rows, unsigned int cols) : rows(rows), cols(cols) {
        data.resize(rows, vector<T>(cols, 0));
    }

    //TODO change so it checks all rowses
  /*  void setData(vector<vector<T>> newData) {
        if (newData.size() != rows || (newData.size() > 0 && newData[0].size() != cols)) {
            throw invalid_argument("Invalid dimensions");
        }
        data = move(newData);
    }
*/
    void setData(vector<vector<T>> newData) {
        if (newData.size() != rows) {
            throw invalid_argument("Invalid rows");
        }
        for (const auto& row : newData) {
            if (row.size() != cols) {
                throw invalid_argument("Invalid columns");
            }
        }
        data = newData;
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Addition");
        }
        Matrix result(rows, cols);
        for (unsigned int i = 0; i < rows; ++i) {
            for (unsigned int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Subtraction");
        }
        Matrix result(rows, cols);
        for (unsigned int i = 0; i < rows; ++i) {
            for (unsigned int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix& operator++() {
        for (auto& row : data) {
            for (auto& element : row) {
                ++element;
            }
        }
        return *this;
    }

    Matrix operator++(int) {
        Matrix temp = *this;
        ++(*this);
        //(*this)++;
        return temp;
    }


    // ==
    bool operator==(const Matrix& other) const {
        return data == other.data;
    }


    Matrix operator*(T scale) const {
        Matrix result(rows, cols);
        for (unsigned int i = 0; i < rows; ++i) {
            for (unsigned int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] * scale;
            }
        }
        return result;
    }
};

#endif //NALOGA0901_MATRIX_H
