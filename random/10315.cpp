
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

    int n,i,j,k;
    string a[5],b[5];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>b[0]>>b[1]>>b[2]>>b[3]>>b[4])
    {
    	cin.ignore(); int t=0;
    	for(i=0;i<=4;i++)
    	{
    		if(a[i][0]==b[i][0]) continue;

    		if(b[i][0]=='A') {t=1;break;}
    		if(a[i][0]=='A') {t=-1;break;}

    		if(b[i][0]=='K') {t=1;break;}
    		if(a[i][0]=='K') {t=-1;break;}

    		if(b[i][0]=='Q') {t=1;break;}
    		if(a[i][0]=='Q') {t=-1;break;}

    		if(b[i][0]=='J') {t=1;break;}
    		if(a[i][0]=='J') {t=-1;break;}

    		if(b[i][0]=='T') {t=1;break;}
    		if(a[i][0]=='T') {t=-1;break;}

    		if(b[i][0]>a[i][0]) {t=1;break;}
    		if(a[i][0]>b[i][0]) {t=-1;break;}

    	}
    	if(t==0) cout <<"Tie.\n";
    	else if(t==1) cout << "White wins.\n";
    	else if(t==-1) cout << "Black wins.\n";
    }









	return 0;

}





