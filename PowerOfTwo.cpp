#include<iostream>
#include<math.h>
using namespace std;
bool isPowerOfTwo(int n) { 
    if(n>=1)   
 return !(n&(n-1));
 else 
 return 0;
 };
int main()
{
    int m;
    cin>>m;

cout<<isPowerOfTwo(m);
}