#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        int a[n] ;
        for(i=0;i<n;i++)
        {
            cin >> a[i] ;
        }
        sort(a,a+n);
        int cnt = 0 ;
        for(i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1])>1) cnt++;
        }
        //cout << cnt << endl;
        if(cnt<1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}