#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mx = max(a,max(b,max(c,d)));
    if(mx==a) cout << a-b << " " << a-c << " " << a-d << "\n";
    else if(mx==b) cout << b-a << " " << b-c << " " << b-d << "\n";
    else if(mx==c) cout << c-b << " " << c-a << " " << c-d << "\n";
    else if(mx==d) cout << d-b << " " << d-c << " " << d-a << "\n";
    return 0;
}