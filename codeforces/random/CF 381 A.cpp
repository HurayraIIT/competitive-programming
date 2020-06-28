	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <bits/stdc++.h>
using namespace std;



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n;
	int i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);

	int s=0,d=0;
    i=0;j=n-1;
    int count = 1;
	while(i<=j)
	{
		if(count%2!=0)
		{
			if(a[i]>a[j]) s+=a[i++];
			else s+=a[j--];
		}
		else
		{
			if(a[i]>a[j]) d+=a[i++];
			else d+=a[j--];
		}
		count++;
	}
	printf("%d %d\n",s,d);
	
	
	return 0;
}