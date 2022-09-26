#include<iostream>
using  namespace std;
class test
{ public:
	int no;
	static int count;
	void getvalue(int);
	void displaycount(void);
};
void test::getvalue(int x)
{
no=x;
cout<<"number is equal to"<<no;
count++;
}
void test::displaycount(void)
{
cout<<"counter"<<count;	
}
int test::count;
int main()
{
test t1,t2,t3;
t1.no=100;
t2.no=200;
t3.no=300;
cout<<t1.no<<t2.no<<t3.no;
cout<<t3.count;
cout<<t2.count;
cout<<t1.count;	
t1.getvalue(200);
t1.getvalue(100);
t1.getvalue(400);
cout<<"    ";	
cout<<t1.count<<"    ";
cout<<t2.count<<"    ";
cout<<t3.count<<"    ";
}
