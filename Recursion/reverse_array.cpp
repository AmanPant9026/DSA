#include<iostream>
using namespace std;

void f(int i,int a[],int n)
{
    if(i>=n/2)
    return;
    swap(a[i],a[n-i-1]);
    f(i+1,a,n);
    
} 

int main()
{ 
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    f(0,a,n);
    for(int i=0;i<n;i++)
    cout << a[i] << " ";
    return 0; 
     
}
//problem-printing 0 instead of 00 
//sometimes only printing first digit of two digit number
//not working with three digit numbers 
