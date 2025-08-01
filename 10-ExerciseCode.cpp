#include <iostream>
using namespace std;

string checkEven(int n) {

    return (n % 2 == 0)
         ? "The provided number is even"
         : "The provided number is odd";
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;                 
    cout << checkEven(n) << endl;  

    return 0;
}