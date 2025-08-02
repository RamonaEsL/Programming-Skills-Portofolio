#include <iostream>
using namespace std;                                                                I declared a fix size array of names,used a for-loop to check each name one by one(linear search)
                                                                                If a match is found exits the loop.After the loop programme prints "Sam" (geeksforgeeks help with linear search)
                                                                                        
int main() {
    const string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    const int N = sizeof(names) / sizeof(names[0]);
    string target= "Sam";

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
