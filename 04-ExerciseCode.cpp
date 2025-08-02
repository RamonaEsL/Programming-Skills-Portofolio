#include <iostream>
using namespace std;

int main() {
    cout << "What is the capital of France? ";
    string answer;
    getline(cin, answer);

    if (answer == "Paris") {
        cout << "Correct! Paris is the capital of France." << endl;
    } else {
        cout << "Incorrect. The capital of France is Paris." << endl;
    }

    return 0;
}