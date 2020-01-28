	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef stack<int> si;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef pair<int,int> pi;

#define pi acos(-1.0)
#define PSB push_back
#define PPB pop_back
#define REP(i,a,b) for(i=a;i<=b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,i,j;
	int a[5];
	for(i=1;i<=4;i++) scanf("%d",&a[i]);
	S s;
	cin >> s;
	int l = s.length();
	int sum=0;
	for(i=0;i<l;i++)
	{
		int d = s[i] - '0' ;
		//cout << d << endl;
		sum+=a[d];
	}
	printf("%d\n",sum);
	
	return 0;
}



		cin  
		cin  