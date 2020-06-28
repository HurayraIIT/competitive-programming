#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int s = n/100;
    n %= 100;
    s += n/20 ;
    n %= 20 ;
    s += n/10 ;
    n %= 10 ;
    s += n/5 ;
    n %= 5 ;
    s += n/1 ;

    cout << s << endl;

    return 0;
}