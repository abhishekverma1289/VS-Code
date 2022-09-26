/*
Member initializer list  -
1. It used to initialize data member of a class.
2. To initialize const data member

3. To initialize reference data member
4. To resolve name coflict between data member and constructor argument
*/
/*
How to initialize const data member of a class?
Const data member need to be initialized 
*/
#include<iostrem>
using namespace std;

class Sample{
	/*
	const int num(20);//this practice this not follwed. is
	//against abtraction*/
	const int num;
	public:
		/*It is standard approach to initailize const data member*/
		Sample(int n):
			num{n}{
			cout<<"Inside constructor..\n";
			}
			void print(){
				
			}
};
