//1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5];

//     for(int i=0; i<=5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i=0; i<=5; i++)
//     {
//         if(1 + a[i]%100)
//         {
//             cout << "unique number" << a[i] <<"\t";

//         }
//     }
//     return 0;
// }   

#include <iostream>
using namespace std;

int main() {
    int a[5];

    // Input array elements
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Unique numbers are: ";
    
    // Outer loop to check each element
    for (int i = 0; i < 5; i++) {
        bool isUnique = true;
        
        // Inner loop to compare current element with all other elements
        for (int j = 0; j < 5; j++) {
            if (i != j && a[i] == a[j]) {
                isUnique = false;  // Not unique if a match is found
                break;
            }
        }
        
        // If the element is unique, print it
        if (isUnique) {
            cout << a[i] << " ";
        }
    }
    
    cout << endl;
    return 0;
}
