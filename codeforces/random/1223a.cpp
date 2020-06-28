#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n;
    cin >> q;
    while(q--)
    {
        cin >> n;
        if(n<=4) cout << 4-n << endl;
        else if(n&1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}