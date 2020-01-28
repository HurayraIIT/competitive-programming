	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <bits/stdc++.h>
#include <ctime>
using namespace std;

void merge(int a[] , int l , int mid , int r )
{
	int i,j,k;
	int n1 = mid-l+1 ;
	int n2 = r-mid;
	int L[n1+4] , R[n2+4] ;
	for(i=0;i<n1;i++) L[i] = a[l+i] ;
	for(i=0;i<n2;i++) R[i] = a[mid+i+1];

	i = 0 ; j = 0 ; k = l ;
	
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			a[k++] = L[i++] ;
		}
		else
		{
			a[k++] = R[j++] ;
		}
	}

	while(i<n1)
	{
		a[k] = L[i];
		k++;
		i++;
	}

	while(j<n2)
	{
		a[k] = R[j];
		k++;
		j++;
	}
    return;
}

void merge_sort(int a[] , int l , int r)
{
	if(l<r)
	{
		int mid = l+(r-l)/2 ;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,r);
		//merge(a,l,mid,r);
	}
	return;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	srand(time(0));
	int n = 200000 , i , j ;

	clock_t start , end ;

	int a[n] ;
	for(i=0;i<n;i++)
	{
		a[i] = rand() ;
	}

	start = clock() ;
    
	merge_sort(a,0,n-1);
	
	end = clock() - start ;

	cout << (double) end / CLOCKS_PER_SEC << " s\n" << endl;
	//cout << " The sorted Array: \n" ;
	//for(i=0;i<n;i++) cout << a[i] << endl;
	
	return 0;
}