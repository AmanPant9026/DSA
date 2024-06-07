#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
           return i;
        }
    }
    return -1;
   
}

int main()
{
    cout << "Input Size of the array" << endl;
    int n;
    cin >> n;
    cout << "Input array elements" << endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element you want to search " << endl;
    int s;
    cin >> s;
    int result=linear_search(arr,n,s);
    if(result==-1)
    cout << "element not found";
    else
    cout << "element was found at " << result << " index";
    return 0;
}