#include<iostream>
using namespace std;
bool fi(int i, string &s)
{
   if(i>=s.size()/2)
   return true;
   if(s[i]!=s[s.size()-i-1])
   return false; 
   return fi(i+1,s);
}
int main()
{   
    string s="MADAM";
    cout<< fi(0,s);
    return 0;
}