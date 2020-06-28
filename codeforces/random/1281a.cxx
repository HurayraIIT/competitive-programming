// HurayraIIT

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

typedef long long LL;
typedef vector<int> vi ;

int main()
{
	
	int t ;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s ;
		cin >> s ;
		
		int l = s.length() ;
		if(s[l-1]=='o') cout << "FILIPINO" << endl;
		else  if(s[l-1]=='u') cout << "JAPANESE" << endl;
		else  if(s[l-1]=='a') cout << "KOREAN" << endl;
		
	}
	
	
	return 0;
}

