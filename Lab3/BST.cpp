#include "BST.h"
#include <iostream>

BST::BST() {
	root = nullptr;
}

//Private Insert
TreeNode* BST::Insert(TreeNode* root, int val) {

	if (root == nullptr) {
		root = new TreeNode(val);
	}
	if (root->getValue() > val) {
		root->setLeft(Insert(root->getLeftNode(), val));
	}
	else if (root->getValue() < val) {
		root->setRight(Insert(root->getRightNode(), val));
	}
	else {
		std::cout << val << " is already in Data Tree.\n";
	}
	return root;
}
//Public Insert
void BST::Insert(int val) {
	root = Insert(root, val);
}

//Private Search
bool BST::Search(TreeNode* root, int val) {
	if (root == nullptr) {
		return false;
	}
	if (root->getValue() == val) {
		return true;
	} 
	if (root->getValue() > val) {
		return Search(root->getLeftNode(), val);
	}
	else {
		return Search(root->getRightNode(), val);
	}
}
//Public Search
bool BST::Search(int val) {
	return Search(root, val);
}
//Private Count
int BST::Count(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	} 
	else {
		int left = Count(root->getLeftNode());
		int right = Count(root->getRightNode());
		return (left + right + 1);
	}
}

//Public Count
int BST::Count() {
	return Count(root);
}

//Private
int BST::Height(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	}
	else {
		int left = Height(root->getLeftNode());
		int right = Height(root->getRightNode());
		int max = 0;
		if (left >= right) {
			max = left;
		}
		else {
			max = right;
		}
		return (max + 1);
	}
}


//Public
int BST::Height() {
	return Height(root);
}

//Private
TreeNode* BST::Delete(TreeNode* root, int val) {

	if (root == nullptr) {
		return root;
	}
	
	if (root->getValue() > val) {
		root->setLeft(Delete(root->getLeftNode(), val));
	}
	else if (root->getValue() < val) {
		root->setRight(Delete(root->getRightNode(), val));
	}
	else {
		//No Children
		if (root->getLeftNode() == nullptr && root->getRightNode() == nullptr) {
			delete root;
			return nullptr;
		}
		//One Child
		if (root->getLeftNode() == nullptr) {
			TreeNode* temp = root->getRightNode();
			delete root;
			return temp;
		}
		else if (root->getRightNode() == nullptr) {
			TreeNode* temp = root->getLeftNode();
			delete root;
			return temp;
		}

		//Two Children

		TreeNode* succ = root->getRightNode();
		while (succ->getLeftNode() != nullptr) {
			succ = succ->getLeftNode();
		}
		root->setValue(succ->getValue());
		root->setRight(Delete(root->getRightNode(), succ->getValue()));
	}

	return root;

}

//Public
TreeNode* BST::Delete(int val) {
	return Delete(root, val);
}





//Traversals

int BST::Inorder(TreeNode* root) {
	std::cout << Inorder(root->getLeftNode()) << ", ";
	std::cout << root->getValue() << ", ";
	std::cout << Inorder(root->getRightNode()) << ", ";
	return root->getValue();
}

void BST::Inorder() {
	Inorder(root);
}

int BST::Preorder(TreeNode* root) {
	std::cout << root->getValue() << ", ";
	std::cout << Inorder(root->getLeftNode()) << ", ";
	std::cout << Inorder(root->getRightNode()) << ", ";
	return root->getValue();
}

void BST::Preorder() {
	Preorder(root);
}

int BST::Postorder(TreeNode* root) {
	std::cout << Inorder(root->getLeftNode()) << ", ";
	std::cout << Inorder(root->getRightNode()) << ", ";
	std::cout << root->getValue() << ", ";
	return root->getValue();
}

void BST::Postorder() {
	Postorder(root);
}