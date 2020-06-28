// Abu Hurayra

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pi acos(-1.0)


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	int t;
	cin >> t ;
	while(t--)
	{
		ll n;
		cin >> n ;
		ll a[n];
		for(int i = 0 ; i < n ; i++ )
		{
			cin >> a[i] ;
		}
		
		ll mx_end = 1 , mn_end = 1 , max_so_far = 1; 
    	ll flag = 0; 
    	int x , y ;
    	
    	for ( int i = 0; i < n ; i++ )
    	{ 
        	if (a[i] > 0)
        	{ 
        	    mx_end *= a[i]; 
        	    mn_end = min(mn_end * a[i], 1ll); 
        	    flag = 1; 
        	} 
	  		else if (a[i] == 0)
	  		{ 
            	mx_end = 1; 
            	mn_end = 1; 
        	} 
	    	else
	    	{ 
            	int temp = mx_end; 
            	mx_end = max(mn_end * a[i], 1ll); 
            	mn_end = temp * a[i]; 
       		} 
  
        	if (max_so_far <= mx_end) 
        	{
        		max_so_far = mx_end ; 
        		y = i ;
        	}
            
    	} 
    	
    	ll res = 0 ;
    
    	if (flag == 0 && max_so_far == 1) res = 0 ; 
    	else res =  max_so_far ; 
    	
    	cout << res << " " << y+1 << endl;
		
	}
	
	
	
	return 0;
}

