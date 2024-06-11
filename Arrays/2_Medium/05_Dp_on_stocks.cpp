//best time to buy and sell stocks
#include<iostream>
#include<vector>
using namespace std;

int maximum(vector<int> &prices)
{
    int mini=prices[0];
    int maxProfit=0;
    int n=prices.size();
    for(int i=1;i<n;i++)
    {
        int cost=prices[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> arr = {7,1,5,3,8,4 };
    int n = arr.size();
    int max= maximum(arr);
    cout << max;
    return 0;
}