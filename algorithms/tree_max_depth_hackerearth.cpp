// https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/tutorial/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

struct node
{
	int value ;
	struct node * left ;
	struct node * right ;
};

struct node * newnode ( int element )
{
	struct node * temp = (node *) malloc(sizeof(node)) ;
	temp -> value = element ;
	temp -> left = temp -> right = NULL ;
	return temp ;
}


int main()
{
	struct node * root ;
	root = (node *) malloc(sizeof(node)) ;

	root -> value = 1 ;

	root -> left = newnode(2) ;
	root -> right = newnode(3) ;

	( root -> left ) -> left = newnode(4) ;
	( root -> left ) -> right = newnode(5) ;


	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
