#include<iostream>
using namespace std;

class Test
{
	int *ptr;
	public:
		Test()
		{
			ptr = new int{4};
		}
		Test()
		{
			delete ptr;
		}
};

int main()
{
	Test obj1;
	Test obj2{obj1};
}
