#include <iostream>
using namespace std;

int main() {
    const string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    const int N = sizeof(names) / sizeof(names[0]);
    string target;

    cout << "Enter name to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (names[i] == target) {
            found = true;
            break;
        }
    }

    if (found)
        cout << target << " is in the list.\n";
    else
        cout << target << " is not in the list.\n";

    return 0;
}