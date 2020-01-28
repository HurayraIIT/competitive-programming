
/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)

#define INF 9999




int main()
{
	off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    int N , e ,i,j;
	


	cin >> N >> e;

	int graph[N][N];

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j) graph[i][j] = 0;
			else graph[i][j] = INF ;
		}
	}

	for(i=0;i<e;i++)
	{
		int a,b,w;
		cin >> a >> b >> w ;
		graph[a-1][b-1] = w ;
	}


    int D[N][N] , k , P[N][N];

    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{

    		if(i==j || graph[i][j]==INF) P[i][j] = -1 ;
    		else P[i][j] = i ;
    	}
    }



    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		D[i][j] = graph[i][j];
    		//cout << D[i][j] << " ";
    	}
    	//cout << endl;
    }
    //cout << endl;


    for(k=0;k<N;k++)
    {
    	for(i=0;i<N;i++)
    	{
    		for(j=0;j<N;j++)
    		{

    			if(D[i][j] > D[i][k]+D[k][j]) P[i][j] = P[k][j] ;
				D[i][j] = min ( D[i][j] ,  D[i][k] + D[k][j] ) ;
    		}
    	}
    }
    
    cout << "The Shortest Path List.\n";

    for(i=0 ; i < N ; i++ )
    {
    	for(j=0;j<N;j++)
    	{
    		if(D[i][j]==INF) cout << "INF ";
    		else cout << D[i][j] << " ";
    	}
    	cout << endl;
    }

    cout << "\nThe Parent Matrix:\n";

    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		cout << P[i][j]+1 << " ";
    	}
    	cout << endl;
    }




	return 0;

}





