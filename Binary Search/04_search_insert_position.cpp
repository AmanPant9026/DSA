#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int insert(vector<int> arr,int n ,int x)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        //maybe an answer
        if(arr[mid]>=x)
        {
            ans=mid;
            //look for more small index on left
            high=mid-1;
        }
        else
        {
            //look for right
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = insert(arr, n, x);
    cout << "The insert position is: " << ind << "\n";
    return 0;
}
