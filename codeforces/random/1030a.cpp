#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n , i , s = 0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    if(s==0) cout << "easy\n";
    else cout << "hard\n";
    return 0;
}