#include<iostream>
using namespace std;

int rotate_array()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<=n;i++)
    {
        
    cout << arr[i] << "  ";
    }
    return 0;
}

int main()
{
    int r=rotate_array();
    return 0;
}

/*
NOTE-
1)time complexity - O(N)
2)space complexity - O(N)
*/