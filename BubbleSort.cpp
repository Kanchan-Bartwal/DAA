#include<iostream>
using namespace std;

void bubbleSort(int arr[])
{
  int comp = 0, swap = 0;
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			comp++;
			if(arr[j] > arr[j+1])
			{
				swap++;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	if(swap == 0)
	break;
	}
	
	cout<<"Sorted array: ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
  
          cout<<endl;
	
	cout<<"Comparision : "<<comp<<endl;
	cout<<"Swapping : "<<swap<<endl;
}
int main(){
	
	int n;
	cout<<"Enter size: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
}
