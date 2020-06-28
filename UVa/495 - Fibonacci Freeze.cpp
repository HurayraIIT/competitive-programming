
    
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

LL fib[5001] ;

LL f(LL n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else if(fib[n]!=0) return fib[n];
	else
	{
		fib[n]=f(n-1)+f(n-2);
		return fib[n];
	}
}


int main()
{

	LL n,i,j;
	fib[0]=0;
	fib[1]=1;
	j=f(5000);

	while(scanf("%lld",&n)==1)
	{
		printf("The Fibonacci number for %lld is %lld\n",n,fib[n]);
	}
	
	
	
	return 0;

}

/*


    
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void add(int a[] , int b[] , int c[] )
{
    int i,j=0;
    for(i=0;i<1101;i++)
    {
        j=a[i]+b[i]+j;
        c[i]=j%10;
        j/=10;
    }
    return;
}

void copy(int a[] , int b[])
{
    int i;
    for(i=0;i<1101;i++) b[i] = a[i] ;
    return;
}

int main()
{

	int n,i,j;
	int nsa = 0;
	
	
	
	while(scanf("%d",&n)==1)
	{
	    if(n==0) printf("The Fibonacci number for 0 is 0\n");
	    else if(n==1) printf("The Fibonacci number for 1 is 1\n");
	    else
	    {
	        int a[1101] = {0} ;
	        int b[1101] = {0} ;
	        int c[1101] = {0} ;
        	b[0]=1;
        	
	        for(i=2;i<=n;i++)
	        {
	            add(a,b,c);
	            copy(b,a);
	            copy(c,b);
	        }
	        int tmp=0;
	        
	        printf("The Fibonacci number for %d is ",n);
	        for(j=1100;j>=0;j--)
	        {
	            if(tmp==0 && c[j]==0)
	            {
	                continue;
	            }
	            else
	            {
	                if(tmp==0) nsa = j;
	                tmp=1;
	                printf("%d",c[j]);
	            }
	        }
	        printf("\n");
	    }
	    //cout << nsa << endl;
	}
	
	return 0;

}




*/


