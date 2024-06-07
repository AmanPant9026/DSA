#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);//tc-O(d)
    reverse(arr,d,n-1);//tc-O(N-d) 
    reverse(arr,0,n-1);//tc-O(N)
                //total tc=O(d+N-d+N)= O(2N)
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
    int d;
    cin >> d;
    leftRotate(arr , n , d);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


/*
NOTE-
1)Time complexity-O(2N)
2)Space complexity-O(1) no extra space needed*/