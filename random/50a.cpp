#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;  cin >> m >> n;
    int s = (m/2)*n;
    if(m&1) s+=n/2;
    cout << s << endl;
    return 0;
}