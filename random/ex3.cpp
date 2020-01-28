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

    int n,i,j;
    cin >> n ;
    int a[n];
    int inf = 0;
    LL s =0 ;
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
        if(i==0) continue;
        if((a[i]==2 && a[i-1]==3) || (a[i]==3 && a[i-1]==2))
        {
            inf = 1 ;
        }
        else if((a[i]==1 && a[i-1]==2) || (a[i]==2 && a[i-1]==1))
        {
            if(i>1 && a[i]==2 && a[i-1]==1 && a[i-2]==3) s-=1;
            s+=3 ;
        }
        else if((a[i]==1 && a[i-1]==3) || (a[i]==3 && a[i-1]==1)) s+=4;
        
        
    }
    if(inf==1) cout << "Infinite\n";
    else
    {
        cout << "Finite\n" << s << endl;
    }








    return 0;

}