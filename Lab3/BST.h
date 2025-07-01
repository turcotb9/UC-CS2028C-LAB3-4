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

	//Traversals
	int Inorder(TreeNode* root);
	int Preorder(TreeNode* root);
	int Postorder(TreeNode* root);
	int Levelorder(TreeNode* root);

public:
	BST();

	void Insert(int val);

	bool Search(int val);

	int Count();

	int Height();

	TreeNode* Delete(int val);

	//Traversal
	void Inorder();
	void Preorder();
	void Postorder();
	void Levelorder();
};

