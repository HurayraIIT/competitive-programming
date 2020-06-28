#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "I hate it\n";
        return 0;
    }
    for(int i = 1 ; i < n ; i++ )
    {
        if(i&1) cout << "I hate that ";
        else cout << "I love that ";
    }
    if(n&1) cout << "I hate it\n";
    else cout << "I love it\n";
    return 0;
}