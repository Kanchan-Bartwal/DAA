// Also called Linear Search
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  int min;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min])
        min=j;
    }
    if(min!=i)
    {
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }
  
  cout<<"The sorted array"<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
  int n;
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  
  int arr[n];
  cout<<"Enter the elements"<<endl;
  
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  selectionSort(arr,n);
  return 0;
}
