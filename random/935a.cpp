#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s=0;
    cin >> n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0) s+=2;
        if((n%i==0 && i==n/i) || i==1 ) s--;
        //cout << i << " " << n/i << endl;
    }
    cout << s << endl;
    return 0;
}