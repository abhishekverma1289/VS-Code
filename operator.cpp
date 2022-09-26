using namespace std;
#include<iostream>
 int main()
 {
int a,b,c=0;
cout<<"enter A B C\n";
cin>>a>>b>>c;
cout<<"the binary are ++a ++b\n "<<++a<<++b<<"\n";
cout<<"the addition of a and b\n"<<a+b<<"\n";
cout<<"the ternary operator\n"<<((b>a)?a:b)<<"\n";
cout<<"the reation operator check\n"<<(a>b)<<"\n";
cout<<"logical operator\n"<<(a&&b)<<(c||c)<<(a&&c)<<"\n";
cout<<"assignment operator\n"<<(a*=b)<<"\n";




    return 0;
 }