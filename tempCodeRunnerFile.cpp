#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {    
   double x = log2(n);
        if(int(x)==x)
            return true;
        else
            return false;
         };
int main()
{
    int m;
    cin>>m;

isPowerOfTwo(m);
}