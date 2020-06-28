#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , a , b , c , s = 0 ;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a+b+c>=2) s++;
    }
    cout << s << endl;
    return 0;
}