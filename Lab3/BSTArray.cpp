#include "BSTArray.h"
#include <iostream>

int BSTArray::Insert(int index, int value) {
	if (array[index] = NULL) {
		array[index] = value;
		return value;
	}

	if (value > array[index]) {
		return Insert(((2 * index) + 2), value);
	}
	if (value < array[index]) {
		return Insert(((2 * index) + 1), value);
	}
}

void BSTArray::Insert(int value) {
	int test = Insert(index, value);
	if (test == value) {
		std::cout << value << " has been inserted.\n";
	}
}

int BSTArray::Search(int index, int value) {
	
	if (index > size) {
		return -1;
	}

	if (value == array[index]) {
		return index;
	}
	if (value > array[index]) {
		return Search(((2 * index) + 2), value);
	}
	if (value < array[index]) {
		return Search(((2 * index) + 1), value);
	}
}

void BSTArray::Search(int value) {
	int valueIndex = Search(index, value);

	if (valueIndex >= 0) {
		std::cout << value << " is found at index: " << valueIndex << ".\n";
	}
	else {
		std::cout << value << " not found.\n";
	}
}

//Traversals
int BSTArray::Inorder(int index) {
	if (index > size) {
		return -1;
	}
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << array[index] << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	return array[index];
}

void BSTArray::Inorder() {
	Inorder(index);
}



int BSTArray::Preorder(int index) {
	if (index > size) {
		return -1;
	}
	std::cout << array[index] << ", ";
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	return array[index];
}

void BSTArray::Preorder() {
	Preorder(index);
}

int BSTArray::Postorder(int index) {
	if (index > size) {
		return -1;
	}
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	std::cout << array[index] << ", ";
	return array[index];
}

void BSTArray::Postorder() {
	Postorder(index);
}

void BSTArray::Levelorder() {
	std::cout << array << "\n";
}