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
 
int n = 100000000, i,j,k;
int is_prime[(100000000>>5)+2 ] ;
 
bool check(int n , int a)
{
    return (bool) (n & (1<<a));
}
/*
int sett(int n , int a)
{
    n = n | (1<<a);
    return n;
}
*/
 
//bool check(int N,int pos){return (bool) (N & (1<<pos));}
int sett(int N,int pos){	return N=N | (1<<pos);}
 
int main()
{
	int sqrtn = int(sqrt(n)) ;
    
	for(i=3;i<=sqrtn;i+=2)
	{
		if(check(is_prime[i>>5],i&31)==0)
		{
			for(j=i*i;j<=n;j+=2*i)
			{
				is_prime[j>>5] = sett(is_prime[j>>5],j&31);
                //if(j==77) cout << "\t" << is_prime[j/32] << endl;
			}
		}
	}
	puts("2");
	int cnt = 1;
	for(i=3;i<=n;i+=2)
	{
		if(check(is_prime[i>>5],i&31)==0)
		{
		    cnt++;
		    
		    if((cnt-1)%100==0)
		    {
		        printf("%d\n",i);
		        //cnt /= 100;
		        //cnt++;
		    }
			
		}
	}
	
	
	
	return 0;
 
}
 