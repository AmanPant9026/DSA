#include<iostream>
using namespace std;

int largest()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int lar=arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
        
    }
    return lar;
}
int main()
{
    
        int lar=largest();
        cout << "LARGEST ELEMENT AMONG THE FOLLOWING ELEMENTS IS" << lar;
   
    return 0;
}