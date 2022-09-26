#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
int arr[n],temp[n];
cout<<"enter the numbers of array \n";

for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int k=0;
for(int j=n-1;j>=0;j--)
{
temp[j]=arr[k];
k++;
}
cout<<"the reverse is ";
for(int i=0;i<n;i++)
{
arr[i]=temp[i];
cout<<arr[i];
}
return 0;
}
