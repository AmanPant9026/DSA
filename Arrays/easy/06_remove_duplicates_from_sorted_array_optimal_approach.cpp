//optimal approach using two pointer

#include<iostream>
using namespace std;

void remove_duplicates()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int index=0;

    for(int j=1 ; j< n; j++)
    {
        if(arr[index] != arr[j])
        {
            arr[index+1]=arr[j];
            index++;
        }
    }
    for(int i=0;i<=index;i++)
    {
        cout << arr[i] << "  ";
    }
    
}

int main()
{
    remove_duplicates();
    return 0;
}

/*
NOTE-
1)Time complexity - O(N)
2)Space complexity - O(1)
*/