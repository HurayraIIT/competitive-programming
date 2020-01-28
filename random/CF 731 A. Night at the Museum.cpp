	
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
	
	S s;
	int n,i,j,sum=0;
	cin >> s;
	int l = s.length();

	char arr[27];
	for(i=0;i<26;i++) arr[i]=i+'a';

	int pos = 0;
	for(i=0;i<l;i++)
	{
		int f=0, b=0;
		//cout << s[i]-'a' << endl;

		f=pos - s[i] + 'a' ;
		//cout << f << endl;
		if(f<0) f=-f;

		if(pos>= s[i]-'a')
		{
			b+=25-pos+1;
			b+=s[i]-'a';
		}
		else
		{
			b+=25-(s[i]-'a')+1;
			b+=pos;
		}

		//cout << f << " " << b << " " ; 
		
		if(f<=b)
		{
			sum+=f;
			
			f=0;
			b=0;
			pos=s[i]-'a';
		}
		else
		{
			sum+=b;
			//cout << b << endl;
			f=0;
			b=0;
			pos=s[i]-'a';
		}
		//cout << arr[pos] << endl;

	}
	printf("%d\n",sum);
	
	
	return 0;
}