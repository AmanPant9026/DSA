 #include<iostream>
 using namespace std;

 void intersec(int arr1[],int arr2[],int n1,int n2)
 {
    int i=0,j=0;
     int temp[n1+n2];
     int k=0;
    while(i < n1 && j < n2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if (arr2[j] <arr1[i])
        {
            j++;
        }
       
        else
        {
            temp[k]=arr1[i];
            k++;
            i++;
            j++;
        }
    }
     //print new unified array
    for(int i=0;i<k;i++)
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
    intersec(arr1,arr2,n1,n2);
    return 0;
 }