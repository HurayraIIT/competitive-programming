	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <bits/stdc++.h>
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

void Insertion_Sort(int a[] , int n)
{
	int key;
	int i,j;
	for(j=1;j<n;j++)
	{
		key = a[j] ;
		i = j - 1 ;
		while(i>=0 && a[i] > key)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key ;
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
	clock_t start , end ;

	int n = 10 , i , j ;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i] = rand() ;
	}

	start = clock() ;

	Insertion_Sort( a , n );

	end = clock() - start ;

	printf("Time = %.10lf s\n",(double) end);

	cout << "Time = " << (double) end / CLOCKS_PER_SEC << " s\n";
 	cout << "The sorted array:\n";
	for(i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
	
	return 0;
}