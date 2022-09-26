/*
How to initialize reference data member of a class ?



*/
#include<iostream>
using namespace std;

class Sample{
	//l-value reference as data member
	int &ref;
	public:
		Sample(int num);
		void print();
};
Sample::Sample(int num):ref{num}{
cout<<"inside constructor..\n";
}
void Sample::print(){
	cout<<"\n Value of ref is"<<ref;
}
int main(){
	int val{90};
	Sample obj{val};
	obj.print();
}
