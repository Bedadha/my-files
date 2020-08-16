#include<bits/stdc++.h>
using namespace std;

struct Node{

 int key;
 struct Node *left,*right;

};
struct Node *newNode(int item){

   struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
   temp->key=item;
   temp->left=temp->right=NULL;
   return temp;
}

void inorder(struct Node *root){
  if(root!=NULL){
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
  }
}
/* A utility function to insert a new node with given key in BST */
struct Node * insert(struct Node *node,int key){
     if(node==NULL)
         return newNode(key);

    if(key<node->key)
        node->left=insert(node->left, key);
    else
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */
	return node;
}

struct Node *minValueNode(struct Node* node){

        struct Node *current =node;

        while(current &&current->left!=NULL)
            current=current->left;

        return current;

}

struct Node *deleteNode(struct Node *root,int key)
{
  if (root==NULL)  return root;
  if(key<root->key)
    root->left=deleteNode(root->left,key);
    else if(key>root->key)
    root->right=deleteNode(root->right,key);

  else {
    if(root->left==NULL)
    {

        struct Node *temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL)
    {

        struct Node *temp=root->left;
        free(root);
        return temp;
    }

    struct Node* temp = minValueNode(root->right);

		// Copy the inorder successor's content to this node
		root->key = temp->key;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->key);
  }

  return root;
}


int main()
{

	struct Node *root = NULL;
	root = insert(root, 1 );
	root = insert(root, 5 );
	root = insert(root, 3 );
	root = insert(root, 2 );
	root = insert(root, 9 );
	root = insert(root, 7 );
	root = insert(root, 8 );

	cout<<"Inorder traversal of the given tree \n";
	inorder(root);

	cout<<"\nDelete 3 \n";
	root = deleteNode(root, 3 );
	cout<<"Inorder traversal of the modified tree \n";
	inorder(root);

	cout<<"\nDelete 5 \n";
	root = deleteNode(root, 5 );
	cout<<"Inorder traversal of the modified tree \n";
	inorder(root);

	cout<<"\nDelete 1 \n";
	root = deleteNode(root, 1 );
	cout<<"Inorder traversal of the modified tree \n";
	inorder(root);

	return 0;
}















