// https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/tutorial/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

// Make a node structure

struct node
{
	int value ;
	struct node * left ;
	struct node * right ;
};

// Utility function for making a new node

struct node * newnode ( int element )
{
	struct node * temp = (node *) malloc(sizeof(node)) ;
	temp -> value = element ;
	temp -> left = temp -> right = NULL ;
	return temp ;
}

// Find maximum depth/height

int maxHeight ( struct node * temp)
{
	if(temp == NULL) return 0 ;

	int lheight = maxHeight(temp -> left) ;
	int rheight = maxHeight(temp -> right) ;

	return max(lheight,rheight) + 1 ;
}


int main()
{
	struct node * root ;
	//root = (node *) malloc(sizeof(node)) ;
	root = newnode(1) ;

	root -> value = 1 ;

	root -> left = newnode(2) ;
	root -> right = newnode(3) ;

	( root -> left ) -> left = newnode(4) ;
	( ( root -> left ) -> left ) -> left = NULL ;

	( root -> left ) -> right = newnode(5) ;

	cout << maxHeight(root) << endl;

	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/


/*        1
		 / \
		2   3
	   / \
	  4   5

	  output = 3

*/