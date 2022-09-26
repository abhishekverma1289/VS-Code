#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
int n,min=INT_MAX,max=INT_MIN;
cout<<"enter the Size of array"<<endl;
cin>>n;
int nums[n];
cout<<"enter the numbers of array"<<endl;


for(int i=0;i<n;i++)
{
cin>>nums[i];
}
for(int j=0;j<n;j++){
    if(min>nums[j])
    min=nums[j];
    if(max<nums[j])
    max=nums[j];

}
cout<<"smallest is "<<min<<endl<<"the biggest is"<<endl<<max;
return 0;
}