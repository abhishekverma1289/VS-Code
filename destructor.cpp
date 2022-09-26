#include<iostream>
using namespace std;
class book{
static int count;
public:
book();
~book();
};
int book::count;

book::book()
{
cout<<"constructor called";
count++;
cout<<"count value is "<<count<<endl;
}
book::~book()
{
	cout<<"destructor is called"<<endl;
	cout<<"value of count is "<<count<<endl;
	count--;
		
}
int main()
{ 
book b1,b2;

}
