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
S a,s;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	int i,j,k;
	a.clear();
	s.clear();
	cin >> a >> s;
	int la=a.length();
	int ls=s.length();
	int d[ls+5]={0};
	for(i=0;i<ls;i++) d[i]=s[i]-'0';
	sort(d,d+ls);
	char ch;
	for(i=0,j=ls-1;i<la;i++)
	{
	    k=a[i]-'0';
	    if(k<d[j])
	    {
	        ch = '0'+d[j];
	        d[j]=0;
	        cout << ch;
	        if(j!=0) j--;
	        //swap(a[i],ch);
	    }
	    else cout << a[i];
	}
	//for(i=0;i<la;i++) cout << a[i];
	cout << "\n";
	
	
	return 0;
}