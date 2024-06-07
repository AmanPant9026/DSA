#include<iostream>
using namespace std;
int f(int i,int sum)
{
if(i<1)
{
    cout<<sum;
    return 0;
}
f(i-1,sum+i);
}
int main()
{
    int n;
    cin >> n;
    f(n,0);

}