#pragma once
#include <iostream>
class BSTArray {
private:
	int size = 100;
	int index = 0;
	int array[100];
	

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


