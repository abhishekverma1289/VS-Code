#include<iostream>
using namespace std;
int sum(int n)
{
 int s=0,i;
 for(i=1;i<=n;i++)
 s=s+i;

 return s;
}
/*
{
 int s=0,i;
 for(i=1;i<=n;i++)
 s=s+i;

 return s;
} 
*/
int main()
{
cout<<sum(10);
}