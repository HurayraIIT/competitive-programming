#include<bits/stdc++.h>
using namespace std;

bool checkVow ( char a )
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y') return true;
    else return false;
}

int main()
{
    string s; cin >> s;
    vector<char> v;
    int i , l = s.length() ;
    for(i=0;i<l;i++)
    {
        s[i] = tolower(s[i]) ;
        if(checkVow(s[i])==0)
        {
            v.push_back('.');
            v.push_back(s[i]);
        }
    }
    for(i=0;i<v.size();i++) cout << v[i];
    cout << endl;
    return 0;
}