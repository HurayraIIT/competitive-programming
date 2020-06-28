#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    string s;
    int n; cin>>n;
    cin >> s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='F' && s[i-1]=='S') a++;
        else if(s[i]!=s[i-1]) b++;
    }
    if(a>b) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}