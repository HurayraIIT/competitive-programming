#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    cin >> t;
    map< string , int > m,mp;
    string ar[1002] , ans;
    int mx = -10000 , v[1002] ;
    for(i=0;i<t;i++)
    {
        cin >> ar[i] >> v[i];
        //cout << i << " Test " << m[ar[i]] << endl;
        m[ar[i]]+=v[i];
        if(m[ar[i]] > mx)
        {
            mx = m[ar[i]] ;
            ans = ar[i] ;
            //cout << ans << endl;
        }
    }

    for(i=0;i<t;i++)
    {
        mp[ar[i]] += v[i] ;
        if(mp[ar[i]] == mx)
        {
            cout << ar[i] << endl;
            return 0;
        }
    }

    //cout << ans << endl;
    
    
    return 0;
}