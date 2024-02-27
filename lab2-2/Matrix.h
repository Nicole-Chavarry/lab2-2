﻿#include <iostream>

class Matrix {
private:
    unsigned int m;
    unsigned int n;
    int** data;

public:
    
    Matrix(unsigned int rows, unsigned int cols);
    ~Matrix();
    void fillRandom();
    int* operator[](unsigned int i);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    Matrix operator+(const Matrix& other);
    Matrix& operator+=(const Matrix& other);
    Matrix operator-(const Matrix& other);
    Matrix& operator-=(const Matrix& other);
    Matrix operator*(const Matrix& other);
    bool operator==(const Matrix& other) const;
    bool operator!=(const Matrix& other) const;
};
int main() {
    const unsigned int rows = 3;
    const unsigned int cols = 4;

    Matrix myMatrix(rows, cols);

    myMatrix.fillRandom();

    std::cout << myMatrix;

    return 0;
}