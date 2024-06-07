//BRUTE FORCE APPROACH
#include<iostream>
#include<set>
using namespace std;

int remove_duplicate()
{
    int n;
    cin >> n;
    int arr[n];
    //input array from user
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    set<int> st; //declare set data structure
    //insert elements in set to remove duplicate elements
    for(int i=0;i<n;i++)
    {
    st.insert(arr[i]);
    }
    //insert distinct elements in the set
    int index=0;
    for(auto it:st) //to iterate in the set
    {
        arr[index]=it;
        index++;
    }
    //print new array which donot contain duplicate elements and is sorted
    for(int i=0;i<index;i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
int main()
{
    int fun=remove_duplicate();
    return 0;
}

/*
NOTE-
1)time complecity-O(NlogN+N)
2)space complexity-O(N)
3)Sets datastructure for a single insertion take O(logN) time complexity
4)Sets stores value in sorted order and do not contain duplicates
5)Click on link to know more about set datastructure-https://www.geeksforgeeks.org/introduction-to-set-data-structure-and-algorithm-tutorials/
*/