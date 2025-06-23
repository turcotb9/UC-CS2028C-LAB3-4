#include "TreeNode.h"
#include <iostream>

//Constructors

TreeNode::TreeNode() {
	value = 0;
	leftNode = nullptr;
	rightNode = nullptr;
}

TreeNode::TreeNode(int val) {
	value = val;
	leftNode = nullptr;
	rightNode = nullptr;
}

//Setter Functions

void TreeNode::setValue(int val) {
	value = val;
}

void TreeNode::setLeft(TreeNode* TN) {
	leftNode = TN;
}

void TreeNode::setRight(TreeNode* TN) {
	rightNode = TN;
}


//Getter Functions

int TreeNode::getValue() {
	return value;
}

TreeNode* TreeNode::getLeftNode() {
	return leftNode;
}

TreeNode* TreeNode::getRightNode() {
	return rightNode;
}