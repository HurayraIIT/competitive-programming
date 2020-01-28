#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n ;
    string a; int s = 0 ;
    while(n--)
    {
        cin >> a;
        if(a[0]=='T') s+=4;
        else if(a[0]=='C') s+=6;
        else if(a[0]=='O') s+=8;
        else if(a[0]=='D') s+=12;
        else if(a[0]=='I') s+=20;
    }
    cout << s << endl;
}