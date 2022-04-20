#include<iostream>
using namespace std;

void fibonacci(int n, int a, int b)
{
    int c=a+b;
    if(c>n)
    return;
    
    if(a==0 && b==1)
    cout<<a<<", "<<b<<", ";
    cout<<c<<", ";
    a=b;
    b=c;
    fibonacci(n,a,b);
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    fibonacci(n,0,1);
    return 0;
}
