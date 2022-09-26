#include<iostream>
using namespace std;

int binarysearch(int arr[],int arrsize,int key)
{
int s=0,e=arrsize;
while(s<=e)
{
int mid=(s+e)/2;
if(arr[mid]==key)
{
return mid+1;
}
else if(arr[mid]>key)
{
e=mid-1;
}
else{
    s=mid+1;
}
}
return -1;
}
int main(){
int n,key;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"the your shitty assfuck array";
for(int a=0;a<n;a++)
{
    cin>>arr[a];
}
cout<<"enter the number you want to find ";
cin>>key;
cout<<"the position is ";
cout<<binarysearch(arr,n,key);
return 0;
}