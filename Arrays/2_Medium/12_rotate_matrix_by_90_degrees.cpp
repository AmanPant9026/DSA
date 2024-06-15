 #include<iostream>
 #include<vector>
 #include <bits/stdc++.h>
 using namespace std;

 void rotateMatrix(vector<vector<int>>&mat)
 {
    int n=mat.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           swap(mat[i][j],mat[j][i]);//transpose matrix without using extra space
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }
 }

 int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3,4}, { 5, 6,7,8}, { 9,10,11,12},{13,14,15,16}};
    rotateMatrix(arr);
    cout << "90 degree Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << "  ";
    }
    cout << endl;
    }

}




