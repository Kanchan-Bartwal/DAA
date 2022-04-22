#include<bits/stdc++.h>
using namespace std;

void jumpSearch(int arr[], int n, int key)
{
    int start=0;
    int end=sqrt(n);
    
    while(arr[end]<=key && end<n)
    {
        start=end;
        end+=sqrt(n);
        
        if(end>n-1)
        end=n;
    }
    
    for(int i=start;i<end;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i<<endl;
            return;
        }
    }
    
    cout<<"Element not found"<<endl;
}

int main()
{
    int n, key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the sorted array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Enter the key to be searched"<<endl;
    cin>>key;
    
    jumpSearch(arr,n,key);
    return 0;
}
