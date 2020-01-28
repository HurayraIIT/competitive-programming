	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <bits/stdc++.h>
#include <ctime>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef stack<int> si;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef pair<int,int> pi;

#define pi acos(-1.0)
#define PSB push_back
#define PPB pop_back
#define REP(i,a,b) for(i=a;i<=b;i++)

void merge(int a[], int l, int mid, int r)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = a[l+i];

    for (j = 0; j < n2; j++) R[j] = a[mid+1+j];

    i = 0;
    j = 0;
    k = l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j]) a[k] = L[i++];
        else a[k] = R[j++];

        k++;
    }

    while(i < n1)
    {
        a[k++] = L[i++];
    }

    while(j < n2)
    {
        a[k++] = R[j++];
    }
}

void merge_sort(int a[] , int l , int r)
{
	while(l<r)
	{
		int mid = l+(r-l)/2 ;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n = 10000 , i , j ;

	time_t start , end ;
	srand(time(0));


	int a[n] ;
	for(i=0;i<n;i++)
	{
		a[i] = rand() ;
		//cout << a[i] << " ";
	}
	cout << endl;

	start = clock() ;

	merge_sort(a,0,n-1);
	
	end = clock() - start ;

	cout << (double)end/1000 << " s\n" << endl; 
	
	return 0;
}