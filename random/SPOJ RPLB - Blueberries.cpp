#include<bits/stdc++.h>
using namespace std;

int dp(int a[] , int n , int k)
{
    int i,j;
    int arr[n+1][k+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            if(i<0 || j < 0) continue;
            else if(i==0 || j==0) arr[i][j]=0;
            else if(a[i-1]>j) arr[i][j] = arr[i-1][j];
            else
            {
                int x;
                //if(i<2) x = arr[0][j-a[i-1]];
                if(i<2) arr[i][j] = max(a[i-1],arr[i-1][j]);
                else arr[i][j]=max(a[i-1]+arr[i-2][j-a[i-1]],arr[i-1][j]);
            }

        }
    }
    return arr[n][k];

    /*
    if(k<=0 || n<=0) return 0;
    if(a[n-1]>k) return dp(a,n-1,k);
    else return max(a[n-1]+dp(a,n-2,k-a[n-1]), dp(a,n-1,k));
        */
}

int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(int cs =1 ; cs<=t ; cs++)
    {
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        int ans = dp(a,n,k);
        printf("Scenario #%d: %d\n",cs,ans);
    }

    return 0;
}
