#include <iostream>
#include <map>
#include <vector>
using namespace std;
 int main()
 {
 	// A MAP IS A GENERALISED ARRAY THAT CONTAINS
 	// KEY - VALUE PAIRS
 	//
 	map<string,int> ms;
 	ms["Ten"]=10;
 	ms["One"]=1;

 	map<int,int> m;
 	m[1]=10;
 	m[2]=20;
 	m[5]=50;
 	m[6]=60;
 	//cout << m[4] << "\n";
 	cout << m.count(6) << "\n"; //m.count(n) is true if n exists
 	cout << m.count(8) << "\n";

 	map<int, vector<int> > mv;

 	//print all the keys and values

 	for(auto x : m)
 	{
 		cout << x.first << " " << x.second << "\n";
 	}

 	return 0;
 }