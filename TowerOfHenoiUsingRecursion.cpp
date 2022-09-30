#include<iostream>
using namespace std;
 int count=0;
int TOH(int n,int A,int B,int C)
{      
       if(n>0)

 {
TOH(n-1,A,C,B);
cout<<"MOVE FROM "<<A<<" TO "<<C<<endl;
count++;
TOH(n-1,B,A,C);
 }
 return count;
} 
int main()
{
    int s;
    cout<<"Enter the number of disks";
    cin>>s;
  cout<<  TOH(s,1,2,3);
  cout<<" moves";
}