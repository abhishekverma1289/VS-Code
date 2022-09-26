#include<iostream>
using namespace std;
void printarray(int n,int arr[]){
       cout<<"Enter the numbers of array"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
  
    for(int i=0;i<n;i++)
    {
cout<<arr[i]<<" ";

    }
    cout<<endl<<"Array printed"<<endl;
}
int main()
{
    int s;
int nums[25];
int pums[15];
int bums[20];
cout<<"Enter the number of size of array"<<endl;
cin>>s;
printarray(s,nums);
printarray(s,pums);
printarray(s, bums);
return 0;
}