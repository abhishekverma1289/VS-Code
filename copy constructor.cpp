/*
Copy constructor:
A copy constructor is a special member function has the same name as class
name and gets called for any of these following reason:
1. When a object is initialized by another object of same class
2. When we pas an object as argugmt to a function as value
3. When we return as object from a function

What we 
Yes.

If we write an user defined copy constructor, can we forc
to provide default copy constructor?


Synatex of copy constructor:
----------------------------
Suppose name of the class is Sample.

Sample(const Sample&);
1. Copy constructor gets called when object is initialized by another.
So, if we did not pass copy objrct as const then data  can be
updated inside the copy constructor,

Sample obj1;
Sample obj2{obj1};

Suppose that, inside copy constructor we did not pass obj1 as const. Then data member  of obj1 can be updated by obj2 copy constructor. To stop




*/


#include<iostream>
using namespace std;

class Test{
	int a;
	float f;
	public:
		Test():a{3},f{5.6f}
		{
			cout<<"From Constructor..\n";
		}
		/*user defind copy constructor*/
		Test(const Test &ref)
		{
			this->a = ref.a;
			this->f = ref.f;
			cout<<"\nFrom copy Constructor.....\n";
		}
		void print(){
			cout<<a<<ends<<f<<endl;
		}
};
int main()
{
	Test obj1;//it will call parameter less constructor
	obj1.print();
	Test obj2{obj1};//obj2 is inilialized with obj1, and defaualt copy constructor gets called.
	obj2.print();
}
