#include<iostream>
using namespace std;
void printstar(int row )
{
for(int i=0;i<=row;i++)
{

int x=row;
int j=x;
    while(j>=1)
    {
        cout<<" ";
       j--;
    }
    for(int s=0;s<=i; s++)
    {
        cout<<"*";
    }
    cout<<endl;
    row--;
   
    }

}
int main()
{
    int rows;
    cout<<"enter the number of rows you want";
    cin>>rows;
    printstar(rows);
}