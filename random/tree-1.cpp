#include<bits/stdc++.h>
using namespace std;

/// structure code of a tree node
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

/// creating a simple node
struct node root;

/// creating a poointer to a node
struct node * ptr_root;
ptr_root = (node * )malloc(sizeof(node));

/// utility function returning node
struct node * newnode( int element )
{
	struct node * temp = (node * ) malloc(sizeof(node));
	temp->data = element;
	temp->left = temp->right = NULL ;
	return temp;
};

/// maximum depth/height of a tree
int maxDepth(struct node* node)
{
	if(node==NULL) return 0;
	else
	{
		/// compute the depth of each subtree
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/// use the larger one
		if(lDepth>rDepth)
			return (lDepth+1);
		else
			return (rDepth+1);
		
	}
}


int main()
{

    return 0;
}
