#include<iostream>
using namespace std;
void printstar(int row )
{
for(int i=0;i<row;i++)
{
    for(int j=0;j<=i;j++)
    {
   cout<<"* ";
    }
    cout<<endl;
    
}
}
int main()
{
    int rows;
    cout<<"enter the number of rows you want";
    cin>>rows;
    printstar(rows);
}