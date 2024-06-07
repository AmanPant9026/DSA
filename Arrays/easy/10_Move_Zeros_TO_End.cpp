#include<iostream>
using namespace std;

void Move_Zero(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
           swap(arr[i],arr[j]);
           j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    Move_Zero(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}






















/*
NOTE-
1)Time complexity-O(N)
2)Space complexity-O(1) no extra space needed
*/