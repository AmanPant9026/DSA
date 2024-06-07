 #include<bits/stdc++.h>
 #include<iostream>
 #include<string.h>
 using namespace std;

 int main()
 {
    string s;
    cin >> s;
    
    //pre computation
    int hash[26]={0};
    //int hash[256]={0};
    //this is for all characters as there are no more than 256 characters
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
        //hash [s[i]]++;
        //s[i] will automatically cast its ascii value  into integer and increment the corresponding index value
    }
    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        //fetch
        cout << hash[c-'a'] << endl;
        //cout << hash[c] << endl;

    }
    return 0;
 }

 /*
 Note-
 1)Time complexity-O(θ*N)
 2)This code is for lower case characters only
 if want to do for all the characters follow the comments above
 */