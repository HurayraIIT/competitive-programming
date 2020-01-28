/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */
    
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;

#define mx 32000
vector<int> prime;

void generatePrime(void)
{
	int i,j;
	int limit=mx;
	{
		
	};
	bool visited[limit+1];
	memset(visited,false,sizeof(visited));
	visited[0]=visited[1]=true;

	//for(i=4;i<=limit;i+=2)  visited[i] = true;
	for(i=3;i*i<=limit;i+=2)
	{
		if(!visited[i])
		{
			for(j=i*i;j<=limit;j+=2*i)
			{
				visited[j]=true;
			}
		}
	}
	prime.push_back(2);

	for(i=3;i<=limit;i+=2)
	{
		if(!visited[i])
		{
			prime.push_back(i);
			//cout<<i<< endl;
		}	
	}
}

void segSieve(LL a , LL b)
{
	LL i,j;
	bool lst[b-a+1];
	memset(lst,0,sizeof(lst));
	for(i=0;prime[i]*prime[i]<=b;i++)
	{
		int cp = prime[i];
		int lim = (a/cp)*cp;
		if(lim<a) lim+=cp;
		if(lim==cp) lim+=cp;
		for(j=lim;j<=b;j+=cp)
		{
			lst[j-a]=1;
		}
	}
	for(i=a;i<=b;i++)
	{
		if(lst[i-a]==0 && i!=1) printf("%lld\n",i);
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t,i=1;
	scanf("%d",&t);
	generatePrime();

	while(t--)
	{
		LL a,b;
		scanf("%lld %lld",&a,&b);
		if(i!=1) printf("\n");
		i++;
		segSieve(a,b);
	}

	return 0;

}




