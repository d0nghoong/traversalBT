#include"traversalBT.h"
treeNode* createNode(element item, treeNode* leftNode, treeNode* rightNode) {
	treeNode* newNode;
	newNode = (treeNode*)malloc(sizeof(treeNode));
	newNode->data = item;
	newNode->left = leftNode;
	newNode->right = rightNode;

	return newNode;
}

void preorder(treeNode* root) {
	if (root) {
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}
