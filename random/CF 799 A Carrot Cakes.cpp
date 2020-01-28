	
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

int OneOven( int n , int t , int k )
{
	int s = 0 ;
	int d = t;
	for(t ;  ; t+=d)
	{
		s+=k;
		if(s>=n) return t;	
	} 
}

int TwoOven( int n , int t , int k , int d )
{
	int s = 0 ;
	int j = d ;
	for(int i = 1 ; ; i++ )
	{
		if(i%t==0) s+=k;
		//if(s>=n) return i;
		if(d==i) j+=t;
		//cout << j << " " << i << " " << s << endl;
		if(j==i)
		{
			//cout << j << " " << s << endl;
			s+=k;
			j+=t;
			
		} 
		if(s>=n) return i;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n , t , k , d , i , s = 0 ;
	scanf("%d %d %d %d" , &n , &t , &k , &d );
	int t1 = 0 ;
	int t2 = 0 ;
	t1 = OneOven( n,t,k );
	t2 = TwoOven( n,t,k,d );
	//cout << t1 << " " << t2 << endl;
	if(t1<=t2) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}