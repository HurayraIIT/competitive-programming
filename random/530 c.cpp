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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j,k,l,let=0,st=0,qt=0;
	S s;
	cin >> s;
	cin >> n;
	//cout << n;
	l=s.length();
	for(i=0;i<l;i++)
	{
		if(s[i]>='a' && s[i]<='z') let++;
		if(s[i]=='*') st++;
		if(s[i]=='?') qt++;
	}
	//cout << let << " " << st << " " << qt << endl;
	if(n<let && st+qt<let-n)
	{
		cout << "Impossible\n";
		return 0;
	}
	else if(n<let && st+qt>=let-n)
	{
	    int tmp=0;
	    int del=let-n;
	    //cout << del <<endl;
	    for(i=0;i<l-1;i++)
	    {
	    	if(s[i]!='?' && s[i]!='*' && (s[i+1]=='?' || s[i+1]=='*') && del!=0)
	    	{
	    		del--;
	    		continue;
	    	}
	        else if(s[i]!='?' && s[i]!='*' && (s[i+1]=='?' || s[i+1]=='*') && del==0) cout << s[i];
	        else if(s[i]!='?' && s[i]!='*' && (s[i+1]!='?' && s[i+1]!='*')) cout << s[i];
	    }
	    if(s[l-1]!='?' && s[l-1]!='*') cout << s[l-1] << endl;
	    return 0;
	}
	else if(n==let)
	{
	    for(i=0;i<l;i++)
	    {
	        if(s[i]!='?' && s[i]!='*') cout << s[i];
	        
	    }
	    cout << "\n";
	    return 0;
	}
	else if(n>=let && st>0)
	{
		//k=l-qt-st;
		int trg=n-let;
		//cout << trg << endl;
		int tmp=0;
		for(i=0;i<l-1;i++)
		{
			if(s[i]!='?' && s[i]!='*' && (s[i+1]!='*' || (s[i+1]=='*' && tmp==1))) cout << s[i];
			else if(s[i]=='?') continue;
			else if(s[i]!='?' && s[i]!='*' && s[i+1]=='*' && tmp==0)
			{
				for(j=0;j<=trg;j++) cout << s[i];
				tmp=1;
			}
		}
		if(s[l-1]!='?' && s[l-1]!='*') cout << s[l-1] << endl;
		return 0;
	}
	else if(n>let && st==0)
	{
	    cout << "Impossible\n";
	    return 0;
	}
	
	
	
	
	
	return 0;
}