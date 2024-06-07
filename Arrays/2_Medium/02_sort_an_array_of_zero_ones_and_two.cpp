/*
Pseudo code of brute force approach-

int cnt0,cnt1,cnt2=0;

for(i=0;i<n;i++)
{
if(a[i]==0)
cnt0++;
else if(a[i]==1)
cnt1++;
else 
cnt2++;
}
for(int i=0;i<cnt0;i++)
a[i]=0;
for(int i=0;i<cnt1;i++)
a[i]=1;
for(int i=0;i<cnt2;i++)
a[i]=2;

Time complexity-O(2N)
*/

//optimal algo- It uses dutch national flag algorithm

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sort_zero_one_two(vector<int>&arr, int n)
{
    int low =0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
          swap(arr[low],arr[mid]);
          low++;
          mid++;  
        }
        else if(arr[mid]==1)
        {
          mid++;
        } 
        else 
        {
           swap(arr[mid],arr[high]);
           high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}
int main()
{
    vector<int> arr = { 0,1,1,2,0,1,1,2,2,1,1,0,0 };
    int n = arr.size();
  
   sort_zero_one_two(arr, n);
    return 0;
}

/*
Note-
1)Time Complexity: O(N), where N = size of the given array.
Reason: We are using a single loop that can run at most N times.
2)Space Complexity: O(1) as we are not using any extra space.
*/