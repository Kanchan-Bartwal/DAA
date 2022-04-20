#include<iostream>
using namespace std;

void toh(int n, char A, char B, char C)
{
    if(n<1)
        return;
    if(n==1)
    {
       cout<<"Move "<<A<<" to "<<C<<endl;
       return;
    }
    toh(n-1,A,C,B); //move n-1 disk from A to B using C
    cout<<"Move "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);//move n-1 disk from B to C using A
}

int main()
{
    int n;
    cout<<"Enter the number of disks to be transferred"<<endl;
    cin>>n;
    
    toh(n,'A','B','C');
    return 0;
}
