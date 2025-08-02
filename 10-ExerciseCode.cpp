#include <iostream>
using namespace std;
                                                      The checkEven function uses the ternary operator (condition ? trueVal : falseVal) to return one of two messages in one line
string checkEven(int n) {                              The sigle line in main calls the function and prints the result (Programiz help )
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
