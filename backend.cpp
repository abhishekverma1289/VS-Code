#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int x;
    cout<<"enter";
    cin>>x;
    
    int num_digits = 0;
    
    do {
        num_digits++;
        x /= 10;
    }
    while (x);
    
    cout << num_digits << endl;
    
    return 0;
}