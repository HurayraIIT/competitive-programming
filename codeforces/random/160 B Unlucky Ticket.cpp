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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
	
	int n,i,j;
	cin >> n;
	char a[2*n+2];
	scanf("%s",a);
	int f[n+1], l[n+1];
	for(i=0;i<n;i++) f[i]=a[i]-'0';
    for(i=n,j=0;i<2*n;i++,j++) l[j]=a[i]-'0';
    //for(i=0;i<n;i++) cout << f[i] << " " << l[i] << endl;
    sort(l,l+n);
    sort(f,f+n);
    //for(i=0;i<n;i++) cout << f[i] << " " << l[i] << endl;
    
    if(f[0]<l[0])
    {
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(f[i]<l[i]) continue;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
    else if(f[0]>l[0])
    {
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(f[i]>l[i]) continue;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
    else printf("NO\n");
	
	return 0;
}