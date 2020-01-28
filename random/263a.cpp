#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s=0,i,a[5][5],j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> a[i][j];
            if(a[i][j]!=0) s = abs(i-2) + abs(j-2) ;
        }
    }

    cout << s << endl; 

    return 0;
}