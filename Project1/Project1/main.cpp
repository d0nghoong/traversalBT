#include"traversalBT.h"
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