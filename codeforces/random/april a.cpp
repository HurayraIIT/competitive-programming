	
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
	cin >> n; 
	int a[n];
	vi v;
	
	for(i=0;i<n;i++) cin >> a[i];
	
	
		for(i=0;i<n/2;i++)
		{
			if(a[i*2]<=a[i*2+1])
			{
				v.push_back(2);
				break;
			}
		}
		for(i=0;i<n/4;i++)
		{
			if(a[i*4]<=a[i*4+1] && a[i*4+1]<=a[i*4+2] && a[i*4+2]<=a[i*4+3])
			{
				v.push_back(4);
				break;
			}
		}
		for(i=0;i<n/8;i++)
		{
			if(a[i*8]<=a[i*8+1] && a[i*8+1]<=a[i*8+2] && a[i*8+2]<=a[i*8+3])
			{
				if(a[i*8+3]<=a[i*8+4] && a[i*8+4]<=a[i*8+5] && a[i*8+5]<=a[i*8+6])
				{
					if(a[i*8+6]<=a[i*8+7])
					{
						v.push_back(8);
						break;
					}
					
				}
			}
		}
	
	int flag = 0 ;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<=a[i+1]) continue;
		else
		{
			flag=1;
			break;
		}
	}

	if(!flag) v.push_back(n);
	int len = v.size();
	if(!len) cout << 1 << endl;
	else
	{
		sort(v.begin(),v.end());
		cout << v[len-1] << endl;
	}
	
	
	return 0;
}