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

int mask(int x)
{
    string s = to_string(x);
    int num=0,a=0;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            num=num*10+(s[i]-'0');
        }
    }
    return num;
}

int main()
{

	
	int n,i,j,a,b,c;
	cin >> a >> b;
	if(a<b) cout << b << "\n";
	else if(a==b) cout << 1 << b << "\n";
	else
	{
	    for(i=a+1;i<=177777;i++)
	    {
	        if(mask(i)==b)
	        {
	            cout << i << "\n";
	            return 0;
	        }
	    }
	}
	
	return 0;
}