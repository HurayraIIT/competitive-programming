/*    Handle: HurayraIIT
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

bool mark[100010];

int main()
{
    

    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif


    int n;
    LL i,j,k;
    
    cin >> n;
    vi v;
    int res[n+1] = {0};
    res[2] = 1 ;
    
    //int limit=sqrt(n+1)+1;
    int limit = n;
	mark[0]=1;mark[1]=1;
	for(i=4;i<=n;i+=2)
	{
		mark[i]=1;
		res[i]=1;
	}
	int mx=1;

	v.push_back(2);
	//cout << 2 << endl;

	for(i=3;i<=limit;i+=2)
	{
		if(mark[i]==0)
		{

			res[i]=mx+1;
			mx++;

			v.push_back(i);
			//cout << i << endl;
			for(j=2*i;j<=n;j+=i)
			{
				mark[j]=1;
				res[j] = res[i];
			}
		}
	}
	int  l = v.size();
	int lst = v[l-1];
	//cout << lst << endl;
/*
	for(i=lst;i>=2;i--)
	{
		res[i]=i-1;
	}

	for(i=0;i<l;i++)
	{
		int tmp=0;
		for(j=lst+1;j<=n;j++)
		{
			if(j%v[i]==0)
			{
				res[j]=v[i]-1;
			}
			if(res[j]==0) tmp++;
		}
		if(tmp==0) break;
	}

*/

	for(i=2;i<=n;i++) cout << res[i] << " " ;
	cout << endl;


    return 0;

}

