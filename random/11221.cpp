
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
	//off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    int n,i,j,k=1;
    cin >> n;
    cin >> ws;
    while(n--)
    {
    	string str;
    	getline(cin,str);
    	vector<char> vc;
    	for(i=0;i<str.length();i++)
    	{
    		if(str[i]>='a' && str[i]<='z') vc.push_back(str[i]);
    	}
    	int len = vc.size();
    	printf("Case #%d:\n",k++);
    	if(sqrt(len)*sqrt(len)!=len) cout << "No magic :(\n";
    	else
    	{
    		bool tmp = true;
    		for(i=0,j=len-1;i<len,j>=0;i++,j--)
    		{
    			if(vc[i]!=vc[j]) {tmp=false;break;}
    		}
    		if(tmp==true) cout << sqrt(len) << endl;
    		else cout << "No magic :(\n";
    	}
    }









	return 0;

}





