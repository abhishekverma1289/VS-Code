#include<iostream>
using namespace std;

double e(int x, int n)
{
 static double sum=1;
 int den=1;int num=1;
 for(int i=0;i<n ;n++)
 {
    num*=x;
    den*=i;
    sum=sum+(num/den);
 }
 return sum;
}

int main()
{cout<<e(3,10);}