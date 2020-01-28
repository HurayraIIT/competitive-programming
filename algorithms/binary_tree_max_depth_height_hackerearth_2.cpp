
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

struct node
{
	int val ;
	struct node * left ;
	struct node * right ;
};

struct node * newNode( int n )
{
	struct node * temp = (node *) malloc(sizeof(node)) ;
	temp -> val = n ;
	temp -> left = temp -> right = NULL ;
	return temp ;
}

int maxHeight( struct node * temp )
{
	if(temp == NULL ) return 0;

	int lHeight = maxHeight(temp->left) ;
	int rHeight = maxHeight(temp->right) ;
	return max(lHeight,rHeight) + 1 ;
}

int maxDia = 0 , dia = 0 ;

void trav ( struct node * temp)
{
	if(temp==NULL) return ;
	dia = maxHeight(temp->left)+maxHeight(temp->right)+1;
	if(dia>maxDia) maxDia = dia;
	trav(temp->left);
	trav(temp->right);
}


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n , head , i , j ;
	string s ;

	cin >> n >> head ;

	struct node * root = newNode(head) ;
	struct node * currentNode = (node *) malloc(sizeof(node));
	

	for(i=1;i<n;i++)
	{
		int data ;
		cin >> s >> data ;
		int l = s.length() ;
		currentNode = root ;


		for(j=0;j<l;j++)
		{

			
			if(s[j]=='L')
			{
				if(!(currentNode->left))
				{
					currentNode->left = newNode(0) ;
				}
				currentNode = currentNode -> left ;
			}
			else
			{
				if(!(currentNode->right))
				{
					currentNode->right = newNode(0) ;
				}
				currentNode = currentNode -> right ;
			}

			//cout << currentNode->left << endl;
		}

		if(currentNode==NULL) currentNode = newNode(data) ;
		else currentNode->val = data ;


	}
	
	maxDia = 0 ; dia = 0 ;

	trav(root) ;

	// int diameter = maxHeight(root->left) + maxHeight(root->right) + 1 ;

	cout << maxDia << endl ;
	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	inp:
5 1
L
2
R
3
LL
4
LR
5

	out:
4

*/
