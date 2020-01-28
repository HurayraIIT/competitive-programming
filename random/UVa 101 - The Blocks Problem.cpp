/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void print(vector<int> v[], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("%d:",i);
		int l = v[i].size();
		for(j=0;j<l;j++)
		{
			printf(" %d",v[i][j]);
		}
		cout << endl;
	}
	return;
}

int k1=0,k2=0;

void searchNum(vector<int> v[] , int x , int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int l = v[i].size();
        for(j=0;j<l;j++)
        {
            if(v[i][j]==x)
            {
                k1=i;
                k2=j;
                return;
            }
        }
    }
    return;
}

void moveOnto(vector<int> v[], int x , int y , int n )
{
    int i,j;
    searchNum(v,x,n);

    for(i=k2+1;i<v[k1].size();i++)
    {
        int a = v[k1][i];
        v[a].push_back(a);
    }
    v[k1].erase(v[k1].begin()+k2,v[k1].end());

    searchNum(v,y,n);

    for(i=k2+1;i<v[k1].size();i++)
    {
        int a = v[k1][i];
        v[a].push_back(a);
    }
    v[k1].erase(v[k1].begin()+k2+1,v[k1].end());
    v[k1].push_back(x);

    /// Old Method
    /*
    int l = v[k1].size();
    for(i=l-1;i>k2;i--)
    {
        int a = v[k1][i];
        if(i!=k2) v[a].push_back(a);
        //v[k1].erase(v[k1].begin()+k2);
    }
    v[k1].erase(v[k1].begin()+k2,v[k1].end());
    //print(v,n);

    searchNum(v,y,n);
    for(i=k2+1;i<v[k1].size();i++)
    {
        int a = v[k1][i];
        v[a].push_back(a);
        v[k1].erase(v[k1].begin()+i);
    }
    v[k1].push_back(x);*/
    //print(v,n);
    return;

}

void moveOver(vector<int> v[], int x , int y , int n )
{
    int i,j;

    searchNum(v,x,n);
    for(i=k2+1;i<v[k1].size();i++)
    {
        int a = v[k1][i];
        v[a].push_back(a);
    }
    v[k1].erase(v[k1].begin()+k2,v[k1].end());

    searchNum(v,y,n);
    v[k1].push_back(x);
    //print(v,n);

    return;
}

void pileOnto( vector<int> v[], int x , int y , int n )
{
    int i,j;
    searchNum(v,y,n);
    for(i=k2+1;i<v[k1].size();i++)
    {
        int a = v[k1][i];
        v[a].push_back(a);
    }
    v[k1].erase(v[k1].begin()+k2+1,v[k1].end());
    j=k1;

    searchNum(v,x,n);
    for(i=k2;i<v[k1].size();i++)
    {
        v[j].push_back(v[k1][i]);
    }
    v[k1].erase(v[k1].begin()+k2,v[k1].end());
    //print(v,n);
}

void pileOver( vector<int> v[], int x , int y , int n )
{
    searchNum(v,y,n);
    int i,j=k1;
    searchNum(v,x,n);
    for(i=k2;i<v[k1].size();i++)
    {
        v[j].push_back(v[k1][i]);
    }
    v[k1].erase(v[k1].begin()+k2,v[k1].end());
    //print(v,n);
}

int main()
{
    //off;
    /*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	*/

	int n , i;
	scanf("%d",&n);
	vector<int> v[n];
	for(i=0;i<n;i++)
	{
		v[i].push_back(i);
	}
	string s,r;
	int x,y;
	while(cin>>s)
	{
		if(s[0]=='q')
		{
			print(v,n);
			return 0;
		}
		if(s[0]=='m')
		{
			cin >> x;
			cin >> r;
			cin >> y;
			if(r[1]=='n')
			{
                searchNum(v,x,n);
                int tmp = k1;
                searchNum(v,y,n);
                if(tmp==k1) continue;

                moveOnto(v,x,y,n);
			}
			else
			{
                searchNum(v,x,n);
                int tmp = k1;
                searchNum(v,y,n);
                if(tmp==k1) continue;

                moveOver(v,x,y,n);
			}
		}
		if(s[0]=='p')
		{
			cin >> x;
			cin >> r;
			cin >> y;
			if(r[1]=='n')
			{
                searchNum(v,x,n);
                int tmp = k1;
                searchNum(v,y,n);
                if(tmp==k1) continue;

                pileOnto(v,x,y,n);
			}
			else
			{
                searchNum(v,x,n);
                int tmp = k1;
                searchNum(v,y,n);
                if(tmp==k1) continue;

                pileOver(v,x,y,n);
			}
		}
	}






	return 0;

}




