#include<iostream>
using namespace std;

int main(){
    int n[100];
    int i = 0;
    int Even = 0;
    int Odd = 0;

    while (true) {
        cout << "Enter an integer: ";
        cin >> n[i];

        if (n[i] == 0) {
            break;      
        }

        if (n[i] % 2 == 0) {
            Even++;
        } else {
            Odd++;
        }

        i++;
    }
    
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd;

    return 0;
}