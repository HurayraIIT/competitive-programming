#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n, i, j;
	string s;

	cin >> n >> s ;
	
	int arr[26][26];

	// initialize the solution array
	for ( i = 0 ; i < 26 ; i++ ) {
		for ( j = 0 ; j < 26 ; j++ ) {
			arr[i][j] = 0 ;
		}
	}

	int mx = 0 , val = 0 ;

	for ( i = 0 ; i < n-1 ; i++ ) {
		val = ++arr[s[i]-'A'][s[i+1]-'A'] ;
		mx = (val>mx) ? val : mx ;
	}

	bool flag = false ;

	for ( i = 0 ; i < 26 ; i++ ) {
		for ( j = 0 ; j < 26 ; j++ ) {
			if ( arr[i][j] == mx ) {
				cout << (char) (i+'A') << (char) (j+'A') << endl ;
				flag = true ;
				break ;
			}
		}
		if ( flag == true ) break ;
	}



	return 0;
}
