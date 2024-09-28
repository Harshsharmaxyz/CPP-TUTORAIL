#include <iostream>
using namespace std;
int main()
{
    int odd[5];
    cout << "enter 5 values";
    for(int i=0; i<=5; i++)
    {
         cin >> odd[i];    
    }
    for(int i=0; i<=5; i++)
    {
        if(odd[i] % 2 != 0)
        {
            cout << "odd number" << odd[i] << " \t ";
        }else{
            cout << " not odd number" << odd[i] << " \t ";
        }
    }
}