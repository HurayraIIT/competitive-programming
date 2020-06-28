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
    int l,i,j,a1=-1,a2=-1,b1=-1,b2=-1,c,d;
    S s;
    cin >> s;
    l=s.length();
    for(i=0;i<l;i++)
    {
    	if(s[i]=='[')
    	{
    		a1=i;
    		break;
    	}
    }
    if(a1==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
    for(i=l-1;i>=a1;i--)
    {
    	if(s[i]==']')
    	{
    		a2=i;
    		break;
    	}
    }
    if(a2==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
    if(a2-a1<2 || a1==-1 || a2==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
	for(i=a1;i<=a2;i++)
	{
		if(s[i]==':')
		{
			b1=i;
			break;
		}
	}
	if(b1==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
	for(i=a2;i>b1;i--)
    {
    	if(s[i]==':')
    	{
    		b2=i;
    		break;
    	}
    }
    if(b2==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
    if(b2-b1<=0 || b1==-1 || b2==-1)
    {
    	cout << -1 << "\n";
    	return 0;
    }
    j=0;
    for(i=b1+1;i<=b2;i++)
    {
    	if(s[i]=='|') j++;
    }
    int an=j+4;
    if(an==0)
    {
        cout << "-1\n";
        return 0;
    }
    cout << an << "\n";

	
	return 0;
}
