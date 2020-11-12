
// Problem: B. Yet Another Bookshelf
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// IIT, Jahangirnagar University

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <bitset>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef long long LL;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(0);  cin.tie(0);
#define sz(a) int((a).size())
#define space " "
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define pi acos(-1.0)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define MOD 1000000007
#define PRECISION(x) cout << fixed << setprecision(x);
#define rep(i,n) for(int ( i ) = ( 0 ) ;( i ) <( n );( i )++)
#define rep2(i,a,b) for(int ( i ) = ( a ) ;( i ) <= ( b );( i )++)
 
 
int main()
{
    fast_io
    
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int a[n], books = 0, first_book = -1 , last_book = n;
    	for (int i=0;i<n;i++)
    	{
    		cin >> a[i];
    		books += a[i] ;
    		if(first_book==-1 && a[i]) first_book = i;
    		if(first_book!=i && a[i]) last_book = i ;
    	}
    	if(books==1) {cout << 0 << endl; continue;}
    	int sol = 0 ;
    	//cout << first_book << " " << last_book << endl;
    	for (int i = first_book ; i<=last_book ; i++)
    	{
    		if(!a[i]) sol++;
    	}
    	cout << sol << endl;
    	
    }

    
    
    return 0;
}









 