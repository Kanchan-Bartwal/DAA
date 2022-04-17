#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
    int b[h-l+1];
    int i=l;
    int j=mid+1;
    int k=0;

    while((i<=mid) && (j<=h))
    {
        if(arr[i] <= arr[j])
            b[k++] = arr[i++];
        else
            b[k++] = arr[j++];
    }

    for(; i<=mid; i++)
        b[k++] = arr[i];

    for(; j<=h; j++)
        b[k++] = arr[j];

    k=0;
    for(int x=l; x<=h; x++)
        arr[x] = b[k++];
}


void mergeSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}


int main()
{
    cout<<"Enter size: ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    mergeSort(arr,0,n-1);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
