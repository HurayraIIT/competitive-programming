#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = a[l+i];

    for (j = 0; j < n2; j++) R[j] = a[mid+1+j];

    i = 0;
    j = 0;
    k = l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j]) a[k] = L[i++];
        else a[k] = R[j++];

        k++;
    }

    while(i < n1)
    {
        a[k++] = L[i++];
    }

    while(j < n2)
    {
        a[k++] = R[j++];
    }
}

void mergeSort(int a[],int l,int r)
{
    if (l < r)
    {
        int mid = l+(r-l)/2;

        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif   

    int n,i,j;
    cin >> n;
    int a[i];
    for(i=0;i<n;i++) cin >> a[i];

    //cout << n+1;

    mergeSort(a,0,n-1);

    cout << "The sorted array is:\n";
    for(i=0;i<n;i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}
