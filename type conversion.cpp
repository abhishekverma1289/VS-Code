/*
type conversion
1. Convert a primary tpye to class type
 a. using one argument constructor
 when we wants to create an object
 
 b. using operator=()
  After creation of an object
  
2. Convert a class type to primary type
 a. using operator type(), type can by any primary type
 operator int()
 */
 #include<iostream>
 using namespace std;
 
 class Number
 {
 	int num;
 	public:
 		Number(int n)
 		{
 			num=n;
 			cout<<"From constructor\n";
		 }
		 void operator=(int n)
 		{
 			this->num=n;
 			cout<<"From operator=()\n";
		 }
		 friend void operator<<(ostream &out, const Number &ref);
		 operator int()
		 {
		 return this->num;	
		 }
 };
 void operator<<(ostream &out, const Number &ref)
 {
 	out<<ref.num;
 }
 int main()
 {
 	Number obj=90;//one argument constructor
 	cout<<obj;
 	
 	obj=89;//operator=()
 	cout<<obj;
 	
 	int k = obj;//
 	cout<<endl<<k;
 }
