#include<iostream>
using namespace std;

int Second_smallest()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int smallest= arr[0];
    int s_smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < smallest)
        {
            s_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]< s_smallest)
        {
            s_smallest=arr[i];
        }
        
    }
    return s_smallest;
}

int main()
{
    int Ssmall=Second_smallest();
    cout << "Second Smallest number is " << Ssmall;  
    return 0;
}

/*
NOTE-
1)Time complexity-O(N)
*/