/* BRUTE FORCE APPROACH PSEUDO CODE-
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
continue;
if(arr[i]+arr[j]==target)
{
target found;
return indexes i and j;
}
}
}

time complexity-O(N^2)
*/


/*
//Better solution pseudo code-

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int twoSumProb(int n,vector<int> book,int target)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        int a=book[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end())
        {
            return 1;
        }
        mpp[a]=i;
    }
    return 0;
}

int main()
{
    vector<int> arr = { 10, 6, 2, 7, 1, 9 };
    int n = arr.size();
    int target = 4;
    cout << twoSumProb(n, arr, target);
    return 0;
}

Note-
Time Complexity: O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).

Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

Space Complexity: O(N) as we use the map data structure.
*/

//optimal Solution
#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int twoSumProb(int n,vector<int> book,int target)
{ int left=0;
int right=n-1;
sort(book.begin(),book.end());
while(left<right)
{
    int sum=book[left]+book[right];
    if(sum==target)
    {
        return 1;
    }
    else if(sum<target)
    left++;
    else
    right--;
}
return 0;
}

int main()
{
    vector<int> arr = { 10, 6, 2, 7, 1, 9 };
    int n = arr.size();
    int target = 15;
    cout << twoSumProb(n, arr, target);
    return 0;
}

/*Note-

1)Time Complexity: O(N) + O(N*logN), where N = size of the array.
Reason: The loop will run at most N times. And sorting the array will take N*logN time complexity.
2)Space Complexity: O(1) as we are not using any extra space.
Here we are distorting the given array. So, if we need to consider this change, the space complexity will be O(N).
*/