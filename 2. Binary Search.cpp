#include<iostream>
using namespace std;

void binarySearchRecursive(int arr[], int n, int data, int l, int h)
{
    if(l>h)
    {
        cout<<"Element not found"<<endl;
        return;
    }
    
    int mid=(l+h)/2;
    if(arr[mid]==data)
    {
        cout<<"Element is present"<<endl;
        return;
    }
    else if(arr[mid]>data)
        binarySearchRecursive(arr,n,data,l,mid-1);
    else
        binarySearchRecursive(arr,n,data,mid+1,h);
}

void binarySearchIterative(int arr[], int n, int data)
{
    int l=0;
    int h=n-1;
    int mid;
    
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==data)
        {
            cout<<"Element is present"<<endl;
            return;
        }
        else if(arr[mid]>data)
        h=mid-1;
        else
        l=mid+1;
    }
    
    cout<<"Element not present"<<endl;
}

int main()
{
    int n, data;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the data to be found"<<endl;
    cin>>data;
    
    binarySearchIterative(arr, n, data);
    binarySearchRecursive(arr,n,data,0,n-1);
    return 0;
}
