#include<iostream>
using namespace std;
int revnum(int num)
{
    int rev=0;
    while(num>0)
    {

    rev=rev*10+num%10;
    num=num/10;

    }
      return rev;

}
int main()
{
    cout<<"Enter the number you want to reverse";
    int n ;
    cin>>n;
    cout<<"The reverse of number is"<< revnum(n);
    return 0;
}