#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c ;
    cin >> n >> a >> b >> c ;
    int dp[n+1];
    //memset(dp,-100000000,sizeof(dp);
    fill(dp,dp+n+1,-100000000);
    dp[0] = 0 ;
    for(int i = a ; i <=n ; i++ ) dp[i] = max(dp[i],dp[i-a]+1);
    for(int i = b ; i <=n ; i++ ) dp[i] = max(dp[i],dp[i-b]+1);
    for(int i = c ; i <=n ; i++ ) dp[i] = max(dp[i],dp[i-c]+1);
    cout << dp[n] << endl;
    return 0;
}