#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef char element;

typedef struct treeNode {
	element data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

treeNode* createNode(element item, treeNode* leftNode, treeNode* rightNode);
void preorder(treeNode* root);
void inorder(treeNode* root);
void postorder(treeNode* root);

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

void main() {
	treeNode* n7 = createNode('D', NULL, NULL);
	treeNode* n6 = createNode('C', NULL, NULL);
	treeNode* n5 = createNode('B', NULL, NULL);
	treeNode* n4 = createNode('A', NULL, NULL);
	treeNode* n3 = createNode('/', n6, n7);
	treeNode* n2 = createNode('*',n4,n5);
	treeNode* n1 = createNode('-', n2, n3);

	printf(" preorder: ");
	preorder(n1);

	printf("\n inorder: ");
	inorder(n1);

	printf("\n postorder: ");
	postorder(n1);


}