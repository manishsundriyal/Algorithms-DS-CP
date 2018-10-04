#include<stdio.h>
#include<stdlib.h>
struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};
BstNode* getnewnode(int x) {
	BstNode* newnode = (BstNode*)malloc(sizeof(BstNode));
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
BstNode* insert(BstNode* root , int x) {

	if (root == NULL) {
		root = getnewnode(x);
	} else {
		if (x >= root->data)root->right = insert(root->right, x);
		if (x <= root->data)root->left = insert(root->left, x);
	}
	return root;
}

bool search(BstNode* root, int data) {
	if (root == NULL) return false;
	else if (root->data == data) return true;
	else if (data <= root->data)return search(root->left, data);
	else return search(root->right, data);


}
int max(BstNode* root){
	BstNode* temp = root ;
	if(root == NULL){
		printf("Empty tree\n");
		return -1;
	}
	while(temp->right != NULL){
		temp = temp->right;
	}
	return temp->data;
}
int max2(BstNode* root){
	if(root == NULL){
		printf("Empty tree\n");
		return -1;
	}
	if(root->right == NULL){
	return root->data;
	}
		max2(root->right);
}
int main() {
	BstNode* root = NULL;
	root = insert(root, 2);
	root = insert(root, 4);
	root = insert(root, 5);
	root = insert(root, 6);
// 	int n;scanf("%d",&n);
// 	if (search(root, n) == true) printf("Found\n");
// 	else printf("Not Found\n");

	printf("%d\n",max2(root));
}