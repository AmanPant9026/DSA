//leader-everyone on the right should be smaller

#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int> Leader(vector<int>&a)
{
    vector<int> ans;
    int maxi=INT_MIN;
    int n=a.size();
    for(int i=n-1;i>=0;i--)//O(N)
    {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());//O(NLogN)
    return ans;

}


int main()
{
    vector<int> arr = {10,22,12,3,0,6 };
    int n = arr.size();
    vector<int> ans= Leader(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}

/*
NOTE-
1)Timecomplexity-O(NlogN + N)
2)Space Complexity-O(N)
*/