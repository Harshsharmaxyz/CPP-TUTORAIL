#include <iostream>
using namespace std;
int main(){
    int a = 90;
    int b = 3;
    int c;
    c = b++;
    b = --a;
    b=b++;
    cout <<a<<b<<c;
    
}