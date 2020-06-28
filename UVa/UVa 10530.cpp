
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

    int n,i,j,t=0;
    string a;
	int arr[11] ;
	for(i=1;i<11;i++) arr[i]=1;

    while(cin >> n)
    {
    	if(n==0) return 0;
    	
    	cin >> ws;
    	getline(cin,a);

    	if(a[0]=='r')
    	{
    		if(arr[n]==1) printf("Stan may be honest\n");
    		else printf("Stan is dishonest\n");

    		for(i=1;i<11;i++) arr[i]=1;
    		continue;
    	}

    	if(a[4]=='h') for(i=n;i<11;i++) arr[i]=0;
    	else if(a[4]=='l') for(i=1;i<=n;i++) arr[i]=0;



    }






	return 0;

}






