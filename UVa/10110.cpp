#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , i , j , s = 0 ;
    while( cin >> n && n )
    {
        s =sqrt(n);
        if(s*s!=n) cout << "no\n";
        else cout << "yes\n";
    }

    return 0;
}
