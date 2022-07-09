#include"Array.h"
#include <iostream>
#include <ctime>

using namespace std;

Array::Array() {
	size = 10;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
Array::Array(int arrSize) {
	size = arrSize;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
Array::Array(const Array& other) {
	delete[]arr;
	this->size = other.size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = other.arr[i];
	}
}
Array::~Array() {
	delete[]arr;
}
int Array::getSize() {
	return size;
}
int Array::FindElem(const int elem) {
	int i = 0;
	while (arr[i] != elem) {
		i++;
	}
	return i;
}
void Array::setRandArray() {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 20;
	}
}
void Array::printArray() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void Array::SortMax() {
	int temp = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int Array::operator [](int index) {
	return arr[index];
}
bool Array::operator ==(const Array& other) {
	if (this->size != other.size)
		return false;
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != other.arr[i])
			return false;
		else
			return true;
	}
}
Array& Array::operator = (const Array& other) {
	if (&other != this) {
		delete[] arr;
		size = other.size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
	}
	return *this;
}
Array& Array::operator + (const Array& other) {
	if (size != other.size) {
		cout << "Array's sizes are different";
		exit(1);
	}
	else
		for (int i = 0; i < size; i++) {
			arr[i] += other.arr[i];
		}
	return *this;
}
Array&Array::operator += (const int& number) {
	int* tempArr = new int[size];
	for (int i = 0; i < size; i++) {
		tempArr[i] = arr[i];
	}
	delete[] arr;
	size++;
	arr = new int[size];
	for (int i = 0; i < size-1; i++) {
		arr[i] = tempArr[i];
	}
	arr[size - 1] = number;
	return *this;
}
Array& Array::operator - (const int& number) {
	int del = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == number)
			del++;
	}
	Array temp(*this);
	delete[]arr;
	size -= del;
	int j = 0;
	arr = new int[size];
	for (int i = 0; i < temp.getSize(); i++) {
		if (temp[i] != number) {
			arr[j] = temp[i];
			j++;
		}
	}
	return *this;
}
int main() {

}