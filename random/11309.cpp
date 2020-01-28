
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

vi v{0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,23*60+32,22*60+22,20*60+02,21*60+12,15*60+51,14*60+41,13*60+31,12*60+21,11*60+11,10*60+01};

int main()
{
	off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    int n,i,j,k;
    /*
    for(i=9;i<=59;i+=10) v.push_back(9*60+i);
    for(i=8;i<=59;i+=10) v.push_back(8*60+i);
    for(i=7;i<=59;i+=10) v.push_back(7*60+i);
    for(i=6;i<=59;i+=10) v.push_back(6*60+i);
    for(i=5;i<=59;i+=10) v.push_back(5*60+i);
    for(i=4;i<=54;i+=10) v.push_back(4*60+i);
    for(i=3;i<=53;i+=10) v.push_back(3*60+i);
    for(i=2;i<=52;i+=10) v.push_back(2*60+i);
    for(i=1;i<=51;i+=10) v.push_back(1*60+i);*/

    for(j=1;j<=9;j++)
    {
    	for(i=j;i<=59;i+=10) v.push_back(j*60+i);
    }

	//cout << v.size();
	sort(v.begin(),v.end());
    cin >> n;
    cin >> ws;
    while(n--)
    {
    	string a;
    	cin >> a;
    	int ans=0;
    	int crnt = ((a[0]-'0')*10+(a[1]-'0'))*60+((a[3]-'0')*10+(a[4]-'0'));
    	for(i=0;i<v.size();i++)
    	{
    		if(v[i]>crnt)
    		{
    			ans = v[i]; break;
    		}
    		if(i==79) ans=0;
    	}
    	int h = ans/60;
    	int m = ans%60;
    	if(h>9) cout << h << ":";
    	else if(h>0) cout <<"0" << h << ":";
    	else cout << "00:";

    	if(m==0) cout << "00\n";
    	else if(m<10) cout << "0" << m << endl;
    	else cout << m << endl;
    }









	return 0;

}


/*
00 00
00 01
00 02
00 03
00 04
00 09
00 11
00 22
00 33
00 44
00 55
*/
