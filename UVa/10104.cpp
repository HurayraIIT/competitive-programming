
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

int gcd(int a , int b , int & x , int & y )
{
    if(a==0) { x=0;y=1;return b; }
    int x1 , y1 , g = gcd(b%a,a,x1,y1);
    x = y1 - (b/a)*x1 ;y = x1; return g;
}

int main()
{
    /*
	off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif
    */

    
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        int x , y ;
        int g = gcd(a,b,x,y);
        if(a==b) {x = 0 ; y = 1 ;}
        cout << x << " " << y << " " << g << endl;
    }
    








	return 0;

}





