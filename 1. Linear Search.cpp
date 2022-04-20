#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int data)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            cout<<"Data value is present"<<endl;
            return;
        }
    }
    
    cout<<"Data value not found"<<endl;
}

int main()
{
    int n, data;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the data value to be searched"<<endl;
    cin>>data;
    
    linearSearch(arr, n, data);
    return 0;
}
