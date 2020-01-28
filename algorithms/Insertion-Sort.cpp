/* Abu Hurayra (HurayraIIT) */
#include<bits/stdc++.h>
using namespace std ;

typedef long long LL;typedef string S;typedef double D;
typedef vector<int> vi;typedef vector<char> vc;
typedef queue<int> qi;typedef stack<int> si;

#define pi 2*acos(0.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)

void InsertionSort ( int A[] , int n )
{
    int j , key , i ;
    for(j=1;j<n;j++)
    {
        key = A[j] ;
        i = j - 1 ;
        while(i>=0 && A[i]>key)
        {
            A[i+1] = A[i] ;
            i = i - 1 ;
        }
        A[i+1] = key ;
    }
    return;
}

void ReverseInsertionSort ( int A[] , int n )
{
    int i , j , key ;
    for ( j = 1 ; j < n ; j++ )
    {
        key = A[j] ;
        i = j - 1 ;
        while( i >= 0 && A[i] < key )
        {
            A[i+1] = A[i] ;
            i = i - 1 ;
        }
        A[i+1] = key ;
    }
    return ;
}

void PrintArray ( int A[] , int n )
{
    for( int i = 0 ; i < n ; i++ ) cout << A[i] << " " ;
    cout << endl;
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    Fin;Fout;
    #endif 

    int n , i , j , key ;
    cin >> n;
    int A[n] ;
    for(i=0;i<n;i++) { cin >> A[i] ; }

    InsertionSort ( A , n ) ;

    ReverseInsertionSort ( A , n ) ;

    PrintArray ( A , n ) ;



    return 0;

}

/*
Input:
5
5 77 2 3 1
Output:
77 5 3 2 1 
*/