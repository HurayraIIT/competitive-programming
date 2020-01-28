
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

    int n ,i,j,k,cs=1;
    while(cin >> n)
    {
    	if(n==0) return 0;
    	printf("Game %d:\n",cs++);
    	int code[n];
    	for(i=0;i<n;i++) cin >> code[i];
    	while(1)
    	{
    		int test[n];
    		int end=0;
    		for(i=0;i<n;i++)
    		{
    			cin >> test[i]; end+=test[i];
    		}
    		if(end==0) break;
    		int flag[n] = {0} , x=0,y=0;
    		for(i=0;i<n;i++)
    		{
    			if(code[i]==test[i]) {x++;flag[i]=1;}
    		}
    		for(i=0;i<n;i++)
    		{
    			for(j=0;j<n;j++)
    			{
    				if(i!=j && code[i]!=test[i] && code[i]==test[j] && flag[j]==0)
    				{
    					y++; flag[j]=1;
    					break;
    				}
    			}
    		}
    		printf("    (%d,%d)\n",x,y);
    	}
    }









	return 0;

}





