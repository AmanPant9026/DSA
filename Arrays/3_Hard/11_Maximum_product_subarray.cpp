//Optimal Approach 1
// #include <bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int> &arr) {
//     int n = arr.size(); //size of array.

//     int pre = 1, suff = 1;
//     int ans = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (pre == 0) pre = 1;
//         if (suff == 0) suff = 1;
//         pre *= arr[i];
//         suff *= arr[n - i - 1];
//         ans = max(ans, max(pre, suff));
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     cout << "The maximum product subarray is: "
//          << maxProductSubArray(arr) << "\n";
//     return 0;
// }

// Note-
// 1)Time Complexity: O(N), N = size of the given array.
// Reason: We are using a single loop that runs for N times.
// 2)Space Complexity: O(1) as No extra data structures are used for computation.


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Optimal Approach 2
#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

// Note-
// 1)Time Complexity: O(N)
// Reason: A single iteration is used.
// 2)Space Complexity: O(1)
// Reason: No extra data structure is used for computation
