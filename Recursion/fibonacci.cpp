#include<iostream>
using namespace std;
int fib(int n)
{
  if(n<=1)
  return n;
  return fib(n-1)+fib(n-2);
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin >> n;
    cout << fib(n);
    cout << endl;
    }
    return 0;
}