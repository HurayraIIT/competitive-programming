#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j;
    string s;
    while(cin>>s)
    {
        int l = s.length();
        j=0;
        for(i=0;i<l;i++) if(s[i]!=' ') j+=s[i]-'0';
        if(j==0) return 0;
        int x = 0;
        for(i=0;i<l;i++)
        {
            if(s[i]<'0' && s[i]>'9') continue;
            if(i&1) x -= (s[i]-'0') ;
            else x += (s[i]-'0');
        }
        for(i=0;i<l;i++) if(s[i]!=' ') cout << s[i];
        if(x%11==0) cout << " is a multiple of 11.\n";
        else cout << " is not a multiple of 11.\n";
    }

    return 0;
}

