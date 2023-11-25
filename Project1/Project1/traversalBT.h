#pragma once
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