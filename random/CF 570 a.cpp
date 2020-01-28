
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

    int n,i,j,q,k,f;
    cin >> q ;
    while(q--)
    {
    	cin >> n ;
    	int a[n+1] , b[n+1];
    	memset(a,0,sizeof(a));
    	memset(b,0,sizeof(b));

    	for(i=1;i<=n;i++)
    	{
    		cin >> k >> f ;
    		a[k]++;
    		if(f==1) b[k]++;
    	}
    	sort(a,a+n+1);
    	sort(b,b+n+1);

    	int s = 0 ;
    	int t = -100 ;

    	for(i=n;i>=0;i--)
    	{
    		if(a[i]==0) break;
    		if(i==n || t==-100)
    		{
    			s+=a[i];
    			t=a[i];
    		}
    		else if(a[i]>=t)
    		{
    			t--;
    			s+=t;
    		}
    		else
    		{
    			s+=a[i];
    			t = a[i];
    		}
    		if(t<=1) break;
    		
    	}

    	int x = 0 ; t = -100 ;

    	for(i=n;i>=0;i--)
    	{
    		if(b[i]==0) break;
    		if(i==n || t==-100)
    		{
    			x+=b[i];
    			t=b[i];
    		}
    		else if(b[i]>=t)
    		{
    			t--;
    			x+=t;
    		}
    		else
    		{
    			x+=b[i];
    			t = b[i];
    		}
    		if(t<=1) break;
    		
    	}

    	cout << s << " " << x << endl;
    }









	return 0;

}





