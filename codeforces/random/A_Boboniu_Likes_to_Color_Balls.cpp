#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

bool can(int a, int b, int c, int d)
{
    int odd = 0 ;
    if(a&1) odd++;
    if(b&1) odd++;
    if(c&1) odd++;
    if(d&1) odd++;
    if(odd<=1) return true;
    if(a>=1 && b>=1 && c>=1) {a--;b--;c--;d+=3;}
    odd = 0 ;
    if(a&1) odd++;
    if(b&1) odd++;
    if(c&1) odd++;
    if(d&1) odd++;
    if(odd<=1) return true;
    return false;
}

int main()
{

    LL t;
    cin >> t;
    while(t--)
    {
        LL r,g,b,w;
        cin >> r >> g >> b >> w ;
        if(!can(r,g,b,w)) cout << "No\n";
        else cout << "Yes\n";
        
    }
    return 0;
}