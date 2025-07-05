#include "BSTArray.h"
#include <iostream>

int BSTArray::Insert(int index, int value) {
	if (array.get(index) == NULL) {
		array.add(value);
		return value;
	}

	if (value > array.get(index)) {
		return Insert(((2 * index) + 2), value);
	}
	if (value < array.get(index)) {
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
	
	if (index > array.getLength()) {
		return -1;
	}

	if (value == array.get(index)) {
		return index;
	}
	if (value > array.get(index)) {
		return Search(((2 * index) + 2), value);
	}
	if (value < array.get(index)) {
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
	if (index > array.getLength()) {
		return -1;
	}
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << array.get(index) << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	return array.get(index);
}

void BSTArray::Inorder() {
	Inorder(index);
}



int BSTArray::Preorder(int index) {
	if (index > array.getLength()) {
		return -1;
	}
	std::cout << array.get(index) << ", ";
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	return array.get(index);
}

void BSTArray::Preorder() {
	Preorder(index);
}

int BSTArray::Postorder(int index) {
	if (index > array.getLength()) {
		return -1;
	}
	std::cout << Inorder(2 * index + 1) << ", ";
	std::cout << Inorder(2 * index + 2) << ", ";
	std::cout << array.get(index) << ", ";
	return array.get(index);
}

void BSTArray::Postorder() {
	Postorder(index);
}

void BSTArray::Levelorder() {
	for (int i = 0; i < array.getLength(); i++) {
		std::cout << array.get(i) << ", ";
	}
	std::cout << "\n";
}