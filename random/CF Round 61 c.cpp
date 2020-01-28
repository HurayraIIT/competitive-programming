/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */
    
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
/*
int add(int a[],int n)
{
	int sum=0;
	for(int i=1;i<=n;i++) if(a[i]) sum+=a[i];
	return sum;
}
*/
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,q,i,j,k,m;
	scanf("%d %d",&n,&q);
	int l[q+10],r[q+10];
	int a[n+10];
	for(i=1;i<=q;i++)
	{
		scanf("%d %d",&l[i],&r[i]);
	}
	int max=0;
	for(i=1;i<q;i++)
	{
		for(j=i+1;j<=q;j++)
		{
			int sum=0;
			int a[n+10]={0};
			for(k=1;k<=q;k++)
			{
				
				if(k==i || k==j) continue;
				for(m=l[k];m<=r[k];m++)
				{
					
					if(a[m]==0) sum++;
					a[m]=1;
				}
			}
			//sum=add(a,n);
			//cout<< sum << endl;
			if(sum>max) max=sum;
		}
	}
	printf("%d\n",max);
	
	
	return 0;
}