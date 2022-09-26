#include <iostream>
using namespace std;
  
int main()
{
    int arr[5];
    cout<<"enter 5 numbers\n";

    for(int i=0; i<5 ; i++)
    {
     cin>>arr[i];
    }    

    cout<<"The array is\n";

    for(int j=0; j<5 ; j++)
    {
     cout<<arr[j]<<" ";
    }  

    return 0;
}