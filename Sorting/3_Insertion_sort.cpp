#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j > 0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
          j--; 
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
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Note-
1)Time complexity-
      -Comparison
        -BEST CASE-O(N)
        -WORST CASE-O(N^2)
      -Swapping
        -BEST CASE-O(1)
        -WORST CASE-O(N^2)
2)BEST CASE IS WHEN ARRAY IS ALREADY SORTED
*/