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

	
	int n,i,j,t,tmp=0;
	scanf("%d",&t);
	char a[t][150];
	int num[t][3]={{0,0,0}};
	int taxi[t]={0}, pizza[t]={0} , girl[t]={0};
	for(i=0;i<t;i++)
	{
	    //scanf("%d %s",&n,a[i]);
	    cin >> n >> a[i];
	    //scanf("%s",a[i]);
	    
	    for(j=0;j<n;j++)
	    {
	        char str[150];
	        scanf("%s",str);
	        int u=(str[0]-'0'),v=(str[1]-'0'),w=(str[3]-'0'),x=(str[4]-'0'),y=(str[6]-'0'),z=(str[7]-'0');
	        if(u==v && v==w && w==x && x==y && y==z) taxi[i]++;
	        else if(u>v && v>w && w>x && x>y && y>z) pizza[i]++;
	        else girl[i]++;
	    }
	}
	int mt=-1, mp=-1, mg=-1;
	for(i=0;i<t;i++)
	{
	    if(mt<taxi[i]) mt=taxi[i];
	    if(mp<pizza[i]) mp=pizza[i];
	    if(mg<girl[i]) mg=girl[i];
	}
	tmp=0;
	cout << "If you want to call a taxi, you should call: ";
	for(i=0;i<t;i++)
	{
	    if(taxi[i]==mt)
	    {
	        if(tmp==0) printf("%s",a[i]);
	        else printf(", %s",a[i]);
	        tmp=1;
	    }
	}
	cout << ".\n";
	tmp=0;
	cout << "If you want to order a pizza, you should call: ";
	for(i=0;i<t;i++)
	{
	    if(pizza[i]==mp)
	    {
	        if(tmp==0) printf("%s",a[i]);
	        else printf(", %s",a[i]);
	        tmp=1;
	    }
	}
	cout << ".\n";
	tmp=0;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for(i=0;i<t;i++)
	{
	    if(girl[i]==mg)
	    {
	        if(tmp==0) printf("%s",a[i]);
	        else printf(", %s",a[i]);
	        tmp=1;
	    }
	    
	}
	cout << ".\n";
	
	return 0;
}





