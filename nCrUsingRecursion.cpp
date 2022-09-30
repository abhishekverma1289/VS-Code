#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}
int ncr(int n , int r)
{
    int num=fact(n);
    int den=fact(n-r)*fact(r);
    return (num/den);
}
int main()
{
    cout<<ncr(4,2);
}