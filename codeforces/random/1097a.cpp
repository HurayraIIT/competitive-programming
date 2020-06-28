#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    int i=0,j=5;
    cin >> s;
    while(j--)
    {
        cin >> a;
        if(s[0]==a[0] || s[1]==a[1]) i=1;
    }
    if(i) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}