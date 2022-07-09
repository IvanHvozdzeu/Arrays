#include <iostream>
#ifndef ARRAY_H
#define ARRAY_H
class Array {
private:
	int* arr;
	int size;
public:
	Array();
	Array(int arrSize);
	Array(const Array& other);
	~Array();
	int getSize();
	int FindElem(const int elem);
	void SortMax();
	void printArray();
	void setRandArray();
	Array& operator = (const Array& other);
	Array& operator + (const Array& other);
	Array& operator += (const int& number);
	Array& operator - (const int& number);
	int operator [](int index);
	bool operator ==(const Array& other);
};
#endif // ARRAY_H