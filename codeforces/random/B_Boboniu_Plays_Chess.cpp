#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,m,x,y,i,j;
    cin >> n >> m >> x >> y ;
    
    int vis[n+1][m+1] ;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            vis[i][j] = 0 ;
        }
    }
    vector<pair<int,int> > v ;
    v.push_back({x,y});
    vis[x][y] = 1 ;
    v.push_back({1,y});
    vis[1][y] = 1 ;

    for(i=1;i<=n;i++)
    {
        if(i&1)
        {
            for(j=1;j<=m;j++)
            {
                if(!vis[i][j]) {v.push_back({i,j});vis[i][j]=1;}
            }
        }
        else
        {
            for(j=m;j>=1;j--)
            {
                if(!vis[i][j]) {v.push_back({i,j});vis[i][j]=1;}
            }
        }
    }
    for(auto val : v)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
