#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,res=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) if(a[i]>=a[k-1] && a[i]) res++;
    
    printf("%d\n",res);
    return 0;
}