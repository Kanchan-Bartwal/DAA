#include<iostream>
using namespace std;

int getMax(int a[], int n) 
{  
   int max = a[0];  
   for(int i = 1; i<n; i++) 
   {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}

void countSort(int a[], int n) // function to perform counting sort  
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; //create count array with size [max+1]  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; // Initialize count array with all zeros  
  }  

  for (int i = 0; i < n; i++) // Store the count of each element  
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; //find cumulative frequency  
  
   for (int i = n - 1; i >= 0; i--) 
   {  
    output[count[--a[i]]] = a[i];  
  }  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; //store the sorted elements into main array  
   }  
}  

void printArr(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  

int main() {  
    int a[] = { 11, 30, 24, 7, 31, 16 };  
    int n = sizeof(a)/sizeof(a[0]);  
    cout<<"Before sorting array elements are"<<endl; 
    printArr(a, n);  
    countSort(a, n);  
    cout<<"After sorting array elements are"<<endl;  
    printArr(a, n);  
    return 0;  
  
}  
