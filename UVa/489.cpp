
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
    	if(n==-1) return 0;
    	string a,b; cin.ignore(); cin >> a >> b;
    	int la = a.length() , lb = b.length() ;
    	int x[26] = {0}; int y[26] = {0}; int cnt=0;
		for(i=0;i<la;i++) x[a[i]-'a'] = 1 ;
    	for(i=0;i<26;i++) cnt+= x[i] ;
    	 

    	int hang=0 , cn=0;
    	cout << "Round " << n << endl;
    	for(j=0;j<lb;j++)
    	{ 
    		int p = b[j] - 'a'; int t = 0;
    		if(x[p]==1 && y[p]==0)
    		{
    			x[p]=0;cn++;
    		}
    		else if(!y[p]) hang++;
    		if(cn<cnt && hang>=7)
    		{
    			cout << "You lose.\n";
    			break;
    		}
    		else if(cn==cnt && hang<7)
    		{
    			cout << "You win.\n";
    			break;
    		}
    		else if(cn<cnt && hang<7 && j==lb-1)
    		{
    			cout << "You chickened out.\n";
    			break;
    		}
    		y[p]=1;
    	}
    }









	return 0;

}





