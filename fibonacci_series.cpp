//print fibonacci series using loop

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=0,b=1;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}