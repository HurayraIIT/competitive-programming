#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin >> n >> m ;
    int a[n] , b[m] ;
    for(i=0;i<n;i++) cin >> a[i] ;
    for(i=0;i<m;i++) cin >> b[i] ;

    //sort(a,a+n);
    //sort(b,b+m);

    int mn =  0 ;
    for(k=0;k<(1<<9);k++)
    {
        int cnt = 0 ;
        for(i=0;i<n;i++)
        {
            bool flg = 0 ;
            for(j=0;j<m;j++)
            {
                int d = (a[i]&b[j]);
                if (k == (k | d))
                {
                    flg = 1 ; break;
                }
            }
            if(flg) cnt++;
        }
        if(cnt==n) {mn = k ; break; }
    }
    cout << mn << endl;
    return 0;
}