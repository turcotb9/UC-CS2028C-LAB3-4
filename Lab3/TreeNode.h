#pragma once
#include <iostream>
class TreeNode {
private:

	int value;
	TreeNode* leftNode;
	TreeNode* rightNode;


public:

	TreeNode();
	TreeNode(int val);

	void setValue();
	void setLeft();
	void setRight();

	int getValue();
	TreeNode* getLeft();
	TreeNode* getRight();
};

