#include <iostream>
#include"Array.h"
class Matrix {
private:
	Array *arr;
	int size;
public:
	Matrix();
	Matrix(int arrSize);
	Matrix(const Matrix& other);
	~Matrix();
	int getSize();
	int FindElem(const int elem);
	void SortMax();
	void printArray();
	void setRandArray();
	Matrix& operator = (const Matrix& other);
	Matrix& operator + (const Matrix& other);
	Matrix& operator += (const int& number);
	Matrix& operator - (const int& number);
	int operator [](int index);
	bool operator ==(const Matrix& other);
};
