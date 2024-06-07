 #include<iostream>

 using namespace std;

int getMaxCons(int arr[],int n)
{
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else 
        {
            cnt=0;
        }
    }
    return maxi;
}


 int main()
 {
    int arr[]={1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0};
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    int max = getMaxCons(arr, N);
    cout << max;
    return 0;
 }