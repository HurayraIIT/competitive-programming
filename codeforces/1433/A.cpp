#include<bits/stdc++.h>
using namespace std;

int main()
{
	map <int,int> mp;
	int s = 0 ;
	for (int j=1; j<=9; j++) {
		int num = j ;
		for (int k=1; k<=4 ;k++) {
			num = j ;
			for (int p=1; p<k; p++) {
				num = num * 10 + j ;
			}
			s += k ;
			mp[num] = s ;
			//cout << num << " " << s << endl;
		}
	}
	int t;
	cin >> t;
	for (int i=0; i<t; i++)
	{
		int x;
		cin >> x;
		cout << mp[x] << endl;
	}
	return 0;
}
