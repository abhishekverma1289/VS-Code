#include<iostream>
using namespace std;
double e(int x , int n)
{
double sum=0;
double static p=1,f=1;
if(n==0) return 1;
else 
{
sum=e(x,n-1);
p=p*x;
f=f*n;
return sum+(p/f);
}




}
int main()
{
cout<<e(3,10);
}