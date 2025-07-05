#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray() {
	capacity = 8;
	arr = new int[capacity];
	size = 0;
}


bool DynamicArray::isEmpty() {
	return size == 0;
}

void DynamicArray::resize() {
	int* oldArr = arr;
	capacity = capacity * 2;
	int* newArr = new int[capacity];

	for (int i = 0; i < size; i++) {
		newArr[i] = oldArr[i];
	}
	delete oldArr;
	arr = newArr;
}

void DynamicArray::add(int val) {
	if (size == capacity) {
		resize();

	}
	else if (isEmpty()) {
		arr[0] = val;
		size = size + 1;
	}
	else {
		arr[size] = val;
		size = size + 1;
	}
}

int DynamicArray::getLength() {
	return size;
}

int DynamicArray::get(int index) {
	return arr[index];
}

void DynamicArray::remove(int index) {
	if (size > 0) {
		int* newArr = new int[capacity];

		for (int i = 0; i < getLength(); i++) {
			if (i < index) {
				newArr[i] = arr[i];
			}
			else if (i > index) {
				newArr[(i - 1)] = arr[i];
			}
		}
		arr = newArr;
		size = size - 1;
	}
	else {
		std::cout << "Array is Empty, cannot remove element.\n";
	}




}