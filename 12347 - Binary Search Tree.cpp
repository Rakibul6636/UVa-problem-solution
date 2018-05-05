#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *Newnode(int data){
	node *tempnode=new node();
	tempnode->data=data;
	tempnode->left=tempnode->right=NULL;
	return tempnode;
}
node *INSERT(node *root,int data){
	if(root==NULL)
		root=Newnode(data);
	else if(root->data>=data)
		root->left=INSERT(root->left,data);
	else
		root->right=INSERT(root->right,data);
	return root;
}
void Postorder(node *root){
	if(root==NULL)
		return;
	Postorder(root->left);
	Postorder(root->right);
	cout <<root->data<<endl;
}
int main(){

	node *root=NULL;
	int n,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		root=INSERT(root,n);

	}
	Postorder(root);
	return 0;

}
