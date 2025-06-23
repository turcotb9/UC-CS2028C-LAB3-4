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

	void setValue(int val);
	void setLeft(TreeNode* TN);
	void setRight(TreeNode* TN);

	int getValue();
	TreeNode* getLeftNode();
	TreeNode* getRightNode();
};

