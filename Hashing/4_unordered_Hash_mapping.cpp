//THE ONLY DIFFERENCE BETWEEN ORDERED MAP AND UNORDERED MAP IS THAT IT DOES NOT STORE THE MAP IN SORTED ORDER AND DIFFERENCE IN TIME COMPLEXITIES

#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;

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
    unordered_map<int ,int> mpp;
     //in map we donot need to declare any array of any size map will automatically figure it out and this is where map takes an upper edge on array
     for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
        
    }
    //to iterate in the map just to show how map stores in unsorted order
    for (auto it: mpp)
    {
      cout << it.first << "->" << it.second << endl;  
    }
    //Queries
     int q;
     cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;

}

/* 
NOTE-
1)Time complexity-
     -Storing and fetching both takes O(1) in avg and best case
     -Storing and fetching both takes O(N) in worst case because of internal collisions
2)Map stores all the value in unsorted order
3)Numbers exceeding 10^7 cannot be hashed using arrays therefore we use STL
4)In STL there are two types-
     -Map
     -Unordered Map
5)STL stands for Standard template library
6)Definition of map-
    -Maps are associative containers that store elements in a mapped fashion. 
    -Each element has a key value and a mapped value. No two mapped values can have the same key values.
    -std::map is the class template for map containers and it is defined inside the <map> header file.
    
*/  