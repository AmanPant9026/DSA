#include<iostream>
using namespace std;
//int hash[10^7]={0}; valid globally
int main()
{
    //input array
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //precompute
    int hash[13]={0};
    //int hash[10^7]={0}; not valid locally as for int it will give segmentation fault
    for(int i=0;i<n;i++)
    {
      hash[arr[i]]+=1;  
    }
    //input queries
    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;

    }
    return 0;
}
 /* NOTES-
 1)inside main you cannot declare integer array size > 10^6
 2)but if we declare integer array size >10^6 globally then we can
 3)globally it can go upto the size of 10^7
 4)time complexity- O(θ*N)
 */