//Brute force approach

// #include<iostream>
// #include<vector>
// using namespace std;

// pair<int,int> firstandlast(vector<int>&arr,int x)
// {
//     int n=arr.size();
//     int first=-1,last=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//            if(first==-1)
//            {
//              first=i;
//            }
//              last=i;
//         }
//     }
//     return {first,last};
// }

// int main()
// {
//     vector<int> arr={2,3,4,6,8,8,8,11,2,13};
//     cout << "enter number you want to find position of" << endl;
//     int x;
//     cin >> x; 
//     pair<int,int> ans=firstandlast(arr,x);
//     cout << "position is " << ans.first << "and " << ans.second;
// }

// Note-
// 1)Time Complexity: O(N), N = size of the given array
// Reason: We are traversing the entire array.
// 2)Space Complexity: O(1) as we are not using any extra space.


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Optimal Approach-1

// #include <bits/stdc++.h>
// using namespace std;

// int lowerBound(vector<int> arr ,int n ,int x)
// {
//     int low=0, high=n-1;
//     int ans=n;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]>=x)
//         {
//             ans=mid;
//             //took for more smaller index on left
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// int upperBound(vector<int> arr , int n ,int x)
// {
//     int low=0, high=n-1;
//     int ans=n;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]>x)
//         {
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// pair <int,int> firstandlast(vector<int>&arr, int n, int k)
// {
//     int lb=lowerBound(arr,n,k);
//     if(lb == n || arr[lb]!=k)
//     return {-1,-1};
//     int ub=upperBound(arr,n,k);
//     return {lb,ub-1};
// }

// int main()
// {
//     vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
//     int n = 8, k = 8;
//     pair<int, int> ans = firstandlast(arr, n, k);
//     cout << "The first and last positions are: "
//          << ans.first << " " << ans.second << "\n";
//     return 0;
// }
// Note-
// 1)Time Complexity: O(2*logN), where N = size of the given array.
// Reason: We are basically using a lower-bound and upper-bound algorithm.
// 2)Space Complexity: O(1) as we are using no extra space.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Optimal Approach-2

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            first = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            last = mid;
            //look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) return { -1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}


int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, k = 8;
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "The first and last positions are: "
         << ans.first << " " << ans.second << "\n";
    return 0;
}

// Note-
// 1)Time Complexity: O(2*logN), where N = size of the given array.
// Reason: We are basically using the binary search algorithm twice.
// 2)Space Complexity: O(1) as we are using no extra space.