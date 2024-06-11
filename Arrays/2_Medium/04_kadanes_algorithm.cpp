/*
pseudo code for brute force

maxi=int-min;
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<n;j++)
{
sum+=arr[j];
maxi=max(sum,maxi)
}
}
}

time complexity-O(N^2)
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long maxSubarray(int arr[], int n)
{
    long long sum=0,maxi=LONG_MIN;
 int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i; // starting index

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    //printing the subarray:
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << " " << arr[i] << " ";
    }
    cout << "]";

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;
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
  
 int maxx= maxSubarray(arr, n);
 cout << " and sum is = " << maxx;

    return 0;
}

/*
Note-
1)Time Complexity: O(N), where N = size of the array.
Reason: We are using a single loop running N times.
2)Space Complexity: O(1) as we are not using any extra space.
*/