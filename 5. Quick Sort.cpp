
#include<iostream>
using namespace std;

void swap(int arr[], int i1, int i2)
{
    int temp = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = temp;
}


int partition(int arr[], int l, int h)
{
    int i=l;
    int j=h;
    int pivot=arr[l];

    while(i<j)
    {
        while(arr[i] <= pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i<j)
            swap(arr,i,j);
    }

    swap(arr,l,j);
    return j;
}


void quickSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int pivot = partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

int main()
{
    cout<<"Enter size: ";
    int n;
    cin>>n;

    cout<<"Enter Elements: ";
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
