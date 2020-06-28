	
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
	
	int n;
	cin >> n;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		D x1,y1,x2,y2,x3,y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		D a,b,c;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		aa=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		bb=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		cout << "The length of the sides: \n" << a << "\n"<< b << "\n" << c << endl;
		if(aa+bb==c2 || aa+c2==bb || bb+c2==aa) cout << "Somokony\n" ;
	}
	
	return 0;
}