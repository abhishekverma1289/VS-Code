#include<iostream>
using namespace std;

class Number
{
	int num1;
	public:
		number(int num):num1{num}
		{
			
		}
		void operator++()
		{
			+num1;
		}
		void operator--()
		{
			--num1;
		}
		int getNum()
		{
			return num
		}
};
int main()
{
Number N1(4);
++N1;
cout<<N1.getNum()<<endl;
N1++;
cout<<N1.getNum()<<endl;
}
