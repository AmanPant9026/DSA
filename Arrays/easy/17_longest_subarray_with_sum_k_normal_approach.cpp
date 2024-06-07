#include<iostream>
using namespace std;

int lenOfLongSubarr(int arr[], int N, int K)
{

    // Variable to store the answer
    int maxlength = 0;

    for (int i = 0; i < N; i++) {

        // Variable to store sum of subarrays
        int Sum = 0;

        for (int j = i; j < N; j++) {

            // Storing sum of subarrays
            Sum += arr[j];

            // if Sum equals K
            if (Sum == K) {

                // Update maxLength
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }

    // Return the maximum length
    return maxlength;
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
    int k;
    cin >> k;
    int max_length=lenOfLongSubarr(arr,n,k);
    cout << "length="<<max_length << endl;

    return 0;

}

/*
NOTE-
1)Subarray means contiguous part of the array
2)time complexity-O(N^3)
*/