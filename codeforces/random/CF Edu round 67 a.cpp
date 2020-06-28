
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

    int i,j,n,m,k;
    cin >> n;
    string s;
    cin >> s ;

    vi v[27];

    for(i=0;i<n;i++)
    {
    	int tmp = s[i] - 'a' ;
    	v[tmp].push_back(i);
    }
    
    
    cin >> m;
    while(m--)
    {
    	string a;
    	cin >> a ;
    	

    	int mx=0;
    	int cnt[27]={0};

    	for(i=0;i<a.length();i++)
    	{
    		int temp = a[i] - 'a' ;
    		cnt[temp]++;
    	}

    	int d=0 , mm=0;

    	for(i=0;i<26;i++)
    	{
    		d = cnt[i];
    		//cout << d << endl;
    		if(d) mm = v[i][d-1];
    		//cout << mm << endl;
    		if(mx<mm) mx = mm ;
    	}

    	cout << mx+1 << endl;

    }


	return 0;

}








/*
while(m--)
    {
    	string a;
    	cin >> a ;
    	memset(arr,0,sizeof(arr));

    	int mx=0;
    	for(i=0;i<a.length();i++)
    	{
    		for(j=0;j<s.length();j++)
    		{
    			if(arr[j]==0 && s[j]==a[i])
    			{
    				arr[j]=1;
    				if(mx<j) mx=j;
    				break;
    			}

    		}
    	}
    	cout << mx+1 << endl;

    }*/