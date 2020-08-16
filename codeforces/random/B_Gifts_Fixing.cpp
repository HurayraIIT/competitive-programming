#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main()
{
    long long t , n , i , j;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        long long a[n] , b[n] ;
        LL mn = INT_MAX * 20ll, mm = INT_MAX * 20ll ;
        for(i=0;i<n;i++)
        {
            cin >> a[i] ;
            mn = min(mn,a[i]);
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i] ;
            mm = min(mm,b[i]);
        }
        long long ans = 0 ;
        //cout << a[0] << " " << b[0] << endl;
        //cout << mn << " " << mm << endl;
        for(i = 0 ; i<n;i++)
        {
            long long int x = a[i] - mn ;
            long long int y = b[i] - mm ;
            ans +=(long long) max(x,y);
        }
        cout << ans << endl;
    }
}