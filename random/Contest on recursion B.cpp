#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef string S;
LL sum=0;


void add_str_n(string n, int i, int l)
{
	if(i==l) return;
	sum+=n[i]-'0';
	i++;
	add_str_n(n,i,l);
}

LL temp;

void add_sum(void)
{
	if(sum<=0 && temp<=9) return;
	int a=sum%10;
	
	temp+=a;
	sum/=10;
	if(sum<=0 && temp>9)
	{
		sum=temp;
		temp=0;
		
	}
	add_sum();
	
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif
	
	int a,b,c,d;
	S n;
	LL k,l;
	sum=0;
	cin >> n >> k;
	l=n.length();
	temp=0;
	add_str_n(n,0,l);
	add_sum();
	sum=temp;
	temp=0;
	sum*=k;
	add_sum();
	printf("%lld\n",temp);
	temp=0;
	
	
	return 0;
}