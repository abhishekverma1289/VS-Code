#include<iostream>
using namespace std;
void fun(int a)
{
    if(a>0)
    {
    cout<<a;
    fun(a-1);
    cout<<" ";
    fun(a-1);
    }
}
int main()
{
    int s;
    cout<<"Enter the number";
    cin>>s;
    fun(s);
}