#include<iostream>
#include<set>
using namespace std;

void uni(int arr1[],int arr2[],int n1,int n2)
{
   
    set<int> st; //declare set data structure
    
    for(int i=0;i<n1;i++)
    {
    st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
    st.insert(arr2[i]);
    }
    
    int temp[n1+n2];//to store unified array
    int index=0;
    for(auto it:st) //to iterate in the set
    {
        temp[index]=it;
        index++;
    }
     cout << "union of the given two array is: ";
    //print new unified array
    for(int i=0;i<index;i++)
    {
        cout << temp[i] << "  ";
    }
}

int main()
{
    cout << "Input first array size" << endl;
    int n1;
    cin >> n1;
    cout << "Input first array elements"<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin >> arr1[i];
    }
    cout << "Input Second array size" << endl;
    int n2;
    cin >> n2;
    cout << "Input second array elements"<<endl;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin >> arr2[i];
    }
    uni(arr1,arr2,n1,n2);
    return 0;
}
/*
Note-
1)Time complexity-O(n1logn + n2logn) + O(n1+n2)
2)Space complexity-O(n1+n2)
*/