#include <iostream>                        I stored the correct pasword in a constant integer,used the variable attempt to hold the user input,used the loop condition
using namespace std;

int main() {
    const int correct = 12345;   
    int attempt = 0;
    while (attempt != correct) {
        cout << "Enter password: ";
        cin >> attempt;
        if (attempt != correct) {
            cout << "Incorrect password, try again." << endl;
        }
    }

    cout << "Welcome to the Secure Area" << endl;
    return 0;

}

