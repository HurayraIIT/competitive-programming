#include<bits/stdc++.h>
using namespace std;
typedef long long LL;



int main()
{

    LL n,i;
    cin >> n;
    LL a[n];
    LL b[100001] = {0} ;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        b[a[i]] += a[i] ;
    }
    
    LL dp[100001] = {0} ;
    for(i=0;i<=100000;i++)
    {
        if(i<=1) dp[i] = b[i];
        else dp[i] = max(dp[i-1],dp[i-2]+b[i]);
    }
    cout << dp[100000] << endl;
    
    return 0;
}