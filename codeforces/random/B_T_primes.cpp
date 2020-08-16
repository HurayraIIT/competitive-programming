#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

bool is_prime( LL n )
{
    if(n<=1) return false;
    for(LL i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

void solve ( LL n )
{
    double x = sqrt(n);
    LL y = x ;
    if(y*y==n && is_prime(sqrt(n)))
    {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main()
{

    LL n,i;
    cin >> n;
    LL a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        solve(a[i]);
    }
    return 0;
}