
/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)

int main()
{
	off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    int n,i,j,k;
    while(cin>>n)
    {
    	if(!n) return 0;
    	string a;
    	cin.ignore();
    	int top=1 , bottom = 6;
    	int north = 2 , south = 5 ;
    	int west = 3 , east = 4 ;
    	int temp=top;
    	while(n--)
    	{
    		cin >> a;
    		char c = a[0];
    		if(c=='n')
    		{
    			temp=top;
    			top = south;
    			south = bottom;
    			bottom = north;
    			north = temp;
    		}
    		else if(c=='s')
    		{
    			temp = top;
    			top = north;
    			north = bottom;
    			bottom = south;
    			south = temp;
    		}
    		else if(c=='e')
    		{
    			temp=top;
    			top = west;
    			west = bottom;
    			bottom = east;
    			east = temp;
    		}
    		else if(c=='w')
    		{
    			temp = top;
    			top = east;
    			east = bottom;
    			bottom = west;
    			west = temp;
    		}
    	}
    	cout << top << endl;
    }









	return 0;

}





