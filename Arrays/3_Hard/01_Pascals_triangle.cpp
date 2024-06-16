//give row and column number find the element
//formula- Row-1 C Col-1 
//Code-
// #include<iostream>
// using namespace std;

// long long ncr(int r, int c)
// {
//     int res=1;
//     for(int i=0;i<c;i++)
//     {
//         res=res*(r-i);
//         res=res/(i+1);
//     }
//     return res;
// }
// int main()
// {
//     cout << "Enter pascals triangle row number"<<endl;
//     int r;
//     cin >> r;
//     cout << "Enter pascals triangle column number"<<endl;
//     int c;
//     cin >> c;
//     long long ans=ncr(r-1,c-1);
//     cout << "Element at the corresponding row and column number is = " << ans;
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Given the row number n. Print the n-th row of Pascal’s triangle.
// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n) {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++) {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
    
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

// Complexity Analysis-
// 1)Time Complexity: O(n*r), where n is the given row number, and r is the column index which can vary from 0 to n-1.
// Reason: We are calculating the element for each column. Now, there are total n columns, and for each column, the calculation of the element takes O(r) time where r is the column index.
// 2)Space Complexity: O(1) as we are not using any extra space.


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//print the entire pascals triangle

#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}
 
int main()
{
    cout << "Enter pascals triangle size"<<endl;
    int n;
    cin >> n;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
       cout << endl;
    }
    return 0;
}

// Note-
// 1)Time Complexity: O(N^2), where n = number of rows(given).
// Reason: We are generating a row for each single row. The number of rows is n. And generating an entire row takes O(n) time complexity.
// 2)Space Complexity: In this case, we are only using space to store the answer. That is why space complexity can still be considered as O(1).