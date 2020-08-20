#include<bits/stdc++.h>
using namespace std;
using LL = long long;

const int mx = 1e5;

LL arr[mx];
struct info
{
    LL sum = 0 ;
    LL prop = 0 ;
} tree[mx*4] ;

void build (int node, int L, int R)
{
    if(L==R)
    {
        tree[node].sum = arr[L];
        return;
    }
    int mid = (L+R)/2 ;
    build(node*2,L,mid);
    build(node*2+1,mid+1,R);
    tree[node].sum = tree[node*2].sum + tree[node*2+1].sum ;
}

void update (int node, int L, int R, int i, int j, LL x)
{
    if(j<L || R<i) return;
    if(L<=i && j<=R)
    {
        tree[node].sum += (R-L+1)*x ;
        tree[node].prop += x ;
        return;
    }
    int mid = (L+R)/2 ;
    update(node*2,L,mid,i,j,x);
    update(node*2+1,mid+1,R,i,j,x);
    
    tree[node].sum += tree[node*2].sum + tree[node*2+1].sum + (R-L+1)*tree[node].prop;
}

LL query (int node, int L, int R, int i, int j, LL carry=0)
{
    if(j<L || R<i) return 0;
    if(L<=i && j<=R) return tree[node].sum+(R-L+1)*carry;
    
    int mid = (L+R) >> 1 ;
    LL x = query(node*2,L,mid,i,j,carry+tree[node].prop);
    LL y = query(node*2+1,mid+1,R,i,j,carry+tree[node].prop);
    return x+y ;
}

int main()
{
    int n;
    //cin >> n;
    n=7;

    for (int i = 1; i <= n; ++i)
    {
        //cin >> arr[i];
        arr[i]=i;
    }

    build(1, 1, n);
    //update(1, 1, 7, 1, 7, 2);
    //update(1, 1, 7, 1, 4, 3);
    cout << "Value for range [1, n]: " <<  query(1, 1, n, 1, n) << "\n\n";

    cout << "State of Segment Tree:\n";
    for (int i = 1; i < 2*n; ++i)
    {
        cout << "index: " << i << " sum: " << tree[i].sum << " prop: " << tree[i].prop << "\n";
    }
    return 0;
}