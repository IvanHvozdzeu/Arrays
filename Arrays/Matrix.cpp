#include "Matrix.h"
#include <iostream>
#include <ctime>

using namespace std;

Matrix::Matrix() {
	size = 10;
	matrix = new Array[size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = 0;
		}
	}
}
Matrix::Matrix(int matrixSize) {
	size = matrixSize;
	matrix = new Array [size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = 0;
		}
	}
}

int main() {
	Matrix m;
	for(int i = 0; i < 5; i++){
		cout << endl;
		for (int j = 0; j < 5; j++) {
			cout << m[i][j] << '\t';
		}
	}
}