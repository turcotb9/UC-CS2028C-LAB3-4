#pragma once
#include <iostream>
#include "DynamicArray.h"
class BSTArray {
private:
	int index = 0;
	DynamicArray array;
	

	int Insert(int index, int value);
	int Search(int index, int value);
	
	//Traversals
	int Inorder(int index);
	int Preorder(int index);
	int Postorder(int index);

public:

	void Insert(int value);

	void Search(int value);

	//Traversals
	void Inorder();
	void Preorder();
	void Postorder();
	void Levelorder();

};


