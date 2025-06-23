#pragma once
#include <iostream>
#include "TreeNode.h"

class BST {
private:
	TreeNode* root;

	TreeNode* Insert(TreeNode* root, int val);

	bool Search(TreeNode* root, int val);

	int Count(TreeNode* root);

	int Height(TreeNode* root);

	TreeNode* Delete(TreeNode* root, int val);
public:
	BST();

	void Insert(int val);

	bool Search(int val);

	int Count();

	int Height();

	TreeNode* Delete(int val);



};

