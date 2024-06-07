/*
Pseudo code for brute force-

for(int i=0;i<n;i++)
{
cnt=0;
for(j=0;j<n;j++)
{
if(arr[j]==arr[i])
cnt++;
}
if(cnt>n/2)
return arr[i];
}

time complexity-O(N^2)
*/


/*
 //better solution

#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    map<int,int> mpp; //map<it.first,it.second>
    for(int i=0;i<v.size();i++)
    {
        mpp[v[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second > (v.size()/2))
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,1,1,1,1,2 };
    int n = arr.size();
    int majority=majorityElement(arr);
    cout << majority;
    return 0;
}

note-
1)Time Complexity: O(N*logN) + O(N), where N = size of the given array.
Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).
2)Space Complexity: O(N) as we are using a map data structure.
*/

//optimal approach-it is done using Moores's Voting algo

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    int cnt=0;
    int el=0;
    for(int i=0;i<v.size();i++)
    {
        if(cnt == 0)
        {
            cnt=1;
            el=v[i];
        }
        else if(v[i] == el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i =0;i<v.size();i++)
    {
        if(v[i]==el)
        cnt1++;
    }
    if (cnt1>(v.size()/2))
    {
        return el;
    }
    return -1;
}
int main()
{
    vector<int> arr = {5,5,5,5,5,1,2,5,5,5,5,4,5,5,5,1,1,1 };
    int n = arr.size();
    int majority= majorityElement(arr);
    cout << majority;
    return 0;
}

/*
Note-
1)Time Complexity: O(N) + O(N), where N = size of the given array.
Reason: The first O(N) is to calculate the count and find the expected majority element. The second one is to check if the expected element is the majority one or not.
If the question states that the array must contain a majority element, in that case, we do not need the second check. Then the time complexity will boil down to O(N).

2)Space Complexity: O(1) as we are not using any extra space.
*/