#include<bits/stdc++.h>
using namespace std;

const int n = 100000 ;
int num[2*n+1];
int sum[4*n+1];

void build ( int at , int l , int r )
{
    sum[at] = 0 ;
    if(l==r) 
    {
        sum[at] = num[l] ;
        return;
    }
    int mid = (l+r)/2 ;
    build(at*2, l, mid);
    build(at*2+1, mid+1, r);
    sum[at] = sum[at*2] + sum[at*2+1] ;
    return;
}

void update ( int at , int  l , int r , int pos , int u)
{
    if(l==r)
    {
        sum[at] += u ;
        return;
    }
    int mid = (l+r)/2 ;
    if(pos<=mid) update(at*2,l,mid,pos,u);
    else update(at*2+1,mid+1,r,pos,u);
    sum[at] = sum[at*2] + sum[at*2+1];
}

int query ( int at , int L , int R , int l , int r )
{
    if(r<L || R<l) return 0;
    if(l<=L && R<=r) return sum[at] ;

    int mid = (L+R)/2 ;
    int x = query(at*2, L , mid , l , r);
    int y = query(at*2+1, mid+1, R, l, r);
    return x+y;
}

int main()
{
    

    return 0;
}