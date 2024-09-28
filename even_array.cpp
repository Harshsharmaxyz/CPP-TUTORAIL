//WAP only even number;
/*#include <iostream>
using namespace std;
int main()
{
    int even[5];
      cout << "enter value";
      for(int i=0; i<=4; i++)
      {
        cin >> even[i];
      }
      for(int i=0; i<=4;i++)
      {
        if(even[i] % 2 == 0)
        {
            cout << even[i] ;
        }
        cout << "not even number"<<"\t" ;
      }

    return 0;

}*/
#include <iostream>
using namespace std;

int main() {
    int even[5];
    cout << "Enter 5 values: " << endl;
    
    // Input loop to take 5 numbers
    for(int i = 0; i < 5; i++) {
        cin >> even[i];
    }
    
    // Output loop to check and print only even numbers
    for(int i = 0; i < 5; i++) {
        if(even[i] % 2 == 0) {
            cout << even[i] << " is an even number" << endl;
        } else {
            cout << even[i] << " is not an even number" << endl;
        }
    }

    return 0;
}
