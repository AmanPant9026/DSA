#include<iostream>
using namespace std;

int SLargest()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if( arr[i] != largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
        
    }
    return slargest;
}

int main()
{
    int slar=SLargest();
    cout << "Second Largest Number is " << slar;
    return 0;
}

/*
NOTE-
1)Time complexity-O(N)
*/