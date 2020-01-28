#include <stdio.h>
#include <string.h>

int main() {
    int T;
    int j;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int vow = 0, con = 0;
        char word[105];
        scanf("%s", word);
        int len = strlen(word);
        int a[26] = {0} ;
        for (int l=0; l<len; l++)
        {
            a[word[l]-'A'] = 1 ;
            //a['P' - 'A'] = 1;
        }
        if(a['A'-'A']) vow++;
        if(a['E'-'A']) vow++;
        if(a['I'-'A']) vow++;
        if(a['O'-'A']) vow++;
        if(a['U'-'A']) vow++;
        
        for(j=0;j<26;j++)
        {
            if(a[j]) con++;
        }
        printf("%d %d\n", vow, con-vow);
    }
    return 0;
}

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


int main()
{
    off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	
	
	
	return 0;

}




