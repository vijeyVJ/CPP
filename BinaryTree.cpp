#include<iostream.h>
#include<conio.h>

struct Node{
	int key;
	Node *left, *right;

	Node(int key)
	{
		this->key = key;
		this->left = this->right =NULL;
	}
};

int max(int x,int y){
 return (x>y)?x:y;
}

int height(Node *root) //function to calculate height of the tree
{
	if(root==NULL)
		return 0;
	return 1 + max(height(root->left),height(root->right));

}
int main()
{
	clrscr();
	Node *root = new Node(15);
	root->left = new Node(10);
	root->left->left = new Node(22);
	root->right = new Node(20);
	root->left->right = new Node(12);
	root->right->right = new Node(25);
	root->right->right->right = new Node(1);

	cout<<"the Height of the binary tree is :"<<height(root);
	getch();
	return 0;
}
