/*#include <iostream>
using namespace std;
int main(){
    int Cyb[5];
    cout << "enter 5 value\n";
    for (int i = 0; i <= 4; i++)
    {
        cin >> Cyb[i];
    }
    cout << "\n data stored in array \n ";
    for (int i = 0; i <= 4; i++)
    {
        cout << Cyb[i] <<"\t";
    }
}*/
#include <iostream>
using namespace std;

int main() {
    int Cyb[5];
    cout << "Enter 5 values:\n";

    // Input values into the array
    for (int i = 0; i < 5; i++) {
        cin >> Cyb[i];
    }

    cout << "\nData stored in array:\n";

    // Output values from the array
    for (int i = 0; i < 5; i++) {
        cout << Cyb[i] << "\t";
    }

    return 0;
}
//how to store data in array
