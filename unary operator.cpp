#include<iostream>
using namespace std;

class cents
{
	int cent;public:
		cents(int c):cent(c)
		{
			
		}
		// -obj
		cents operator-()
		{
			cent = -cent;
			return (*this);
		}
		int getcent()const
		{
			return cent;
		}
};
int main()
{
	cents obj(4);
	-obj;
	cout<<obj.getcent();
}
