#include<iostream>
using namespace std;
int main()
{
    int n,max=0,min=0;
    cout<<"enter the size of an array\n";
    cin>>n;
int arr[n];
cout<<"enter the numbers of array \n";

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

max=min=arr[0];
for(int j=0;j<n;j++)
{
    if(max<arr[j])
    max=arr[j];
    if(min>arr[j])
    min=arr[j];
}

cout<<"the max is "<<max;
cout<<"the min is "<<min;


return 0;
}