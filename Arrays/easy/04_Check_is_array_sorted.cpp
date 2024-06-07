#include<iostream>
using namespace std;

int Sorted()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i] >= arr[i-1])
        {

        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
 int check=Sorted();
    cout << check;
    return 0;
}