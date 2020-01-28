#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a=0,b=0;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a') a++;
        else b++;
    }

    while(b!=0 && a<=(a+b)/2)
    {
        b--;
    }

    cout << a +b << endl;
    return 0;
}