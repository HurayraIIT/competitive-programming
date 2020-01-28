#include<bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    int n;
    Sorting(void)
    {
        cout << "Enter the number of data: ";
        cin >> n;
        int a[n];
        cout << "Enter the data: ";
        for(int i=0;i<n;i++) cin >> a[i];
        cout << "\n";
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

    void Print()
    {
        for(i=0;i<n;i++)
        {
            cout << a[i] << " ";

        }
        cout << "\n";
    }

};




int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif   */

    /*int n,i,j;
    cin >> n;
    int a[i];
    for(i=0;i<n;i++) cin >> a[i];

    //cout << n+1;*/
    Sorting obj1;

    //obj1.mergeSort(a,0,n-1);
    int n=obj1.n;
    cout << "\nThe sorted array is:\n";
    
    obj1.Print();

    return 0;
}
