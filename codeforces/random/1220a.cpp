#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0,t,z=0; cin >> t;
    string s; cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z') z++;
        else if(s[i]=='n') n++;
    }
    while(n--)
    {
        cout << "1 ";
    }
    while(z--)
    {
        cout << "0 ";
    }
    cout << endl;
    return 0;
}