#include<bits/stdc++.h>
using namespace std;
typedef long long LL;



int main()
{

    LL t,n,i;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        for(i=3;i<=n;i = (i<<1)+1)
        {
            if(n%i==0)
            {
                cout << n/i << endl;
                break;
            }
        }
    }
    
    return 0;
}