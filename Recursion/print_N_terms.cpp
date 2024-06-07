#include<iostream>
using namespace std;
void f(int i, int n)
{
    if(i>n)
     return;
    cout<< "RAJ";
    f(i+1,n);

}
main()
{
    int n;
    cin >> n;
    f(1,n);
}