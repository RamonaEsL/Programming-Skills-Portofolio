#include <iostream>
using namespace std;                             I got the input for both month number and the year.
                                                The function isLeapYear(year) applies the standard rule: divisible by 400, or divisible by 4 but not by 100,
                                                I used  series of if‑else statements to test the program

int main() {
    int month;
    cout << "Enter the month number (1‑12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 days (assuming non-leap year)" << endl;
            break;
        default:
            cout << "Invalid month number — please enter 1 through 12." << endl;
            break;
    }

    return 0;

}
