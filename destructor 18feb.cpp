#include<iostream>
using namespace std;

class Test
{
	int *ptr;
	public:
		Test()
		{
			ptr = new int{4};
			cout<<"From constructor\n";
		}
		~Test()
		{
			cout<<"\nFrom destructor...";
			delete ptr;
		}
};

int main()
{
	Test *ptr = new Test();
	delete ptr;
}
