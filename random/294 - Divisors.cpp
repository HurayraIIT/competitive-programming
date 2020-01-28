#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int limit = sqrt(1000000000)+1;
bool mark[100000] ;

void sieve(void)
{
    int i,j;
    mark[0]=mark[1]=1;
    for(i=4;i<=limit;i+=2) mark[i]=1;
    v.push_back(2);
    for(i=3;i<=limit;i+=2)
    {
        if(!mark[i])
        {
            v.push_back(i);
            for(j=i*i;j<=limit;j+=2*i)
            {
                mark[j]=1;
            }
        }
    }
    return;
}


int main()
{
    int n,t,i,j;
    sieve();
    //for(i=0;i<=100;i++) cout << v[i] << endl;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int arr[r-l+2][2] = {0} ;
        for(i=0;v[i]<=sqrt(r) ;i++)
        {
            for(j=l;j<=r;j++)
            {
                if(j%v[i]==0)
                {
                    arr[j-l][0]=v[i];
                    n=j;
                    while(n%j!=0)
                    {
                        n=n/j;
                        arr[j-l][1]++;
                    }
                }
            }
        }
        for(i=l;i<=r;i++) cout << arr[l-i][0] << endl;
    }
    return 0;
}


