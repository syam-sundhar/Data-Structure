//binary search tree
#include<stdio.h>
#include <stdlib.h>
typedef struct binary_tree{
	struct binary_tree *left, *right;
	int data;
}bt;
bt *root=NULL;

void create(){
	bt *c=0,*nn=0;
	int i,n;
	printf("enter no of nodes: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		nn=(bt *)malloc(sizeof(bt));
		nn->left=NULL;
		nn->right=NULL;
		printf("enter the data: ");
		scanf("%d",&nn->data);
		if(i==0){
			root=nn;
		}
		else{
			c=root;
			while(1){
				if(nn->data>c->data){
					if(c->right==NULL){
						c->right=nn;
						break;
					}
					else{
						c=c->right;
					}
				}
				else if(nn->data<c->data){
					if(c->left==NULL){
						c->left=nn;
						break;
					}
					else{
						c=c->left;
					}
				}
				else{
					printf("duplicated values are not allowed ");
					break;
				}
			}
		}
	}
}

void inorder(bt *root){
	if (root == NULL){
		return ;
	}
	
	inorder(root->left);
	printf("%d  ",root->data);
	inorder(root->right);
}

void preorder(bt *root){
	if (root == NULL){
		return ;
	}
	printf("%d  ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(bt *root){
	if (root == NULL){
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d  ",root->data);
}

int main(){
	create();
	printf("\ninorder:    ");
	inorder(root);
	printf("\npre order:  ");
	preorder(root);
	printf("\npost order: ");
	postorder(root);
}
