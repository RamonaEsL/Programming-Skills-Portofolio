#include <iostream>
using namespace std;
                                                                                      cout<<ask the question 
                                                                                     getline(cin, answer);	Reads whatever the user types, including spaces (“Paris ”, “ paris”) into the string answer.
                                                                                     if (answer == "Paris")	 returns true if every letter matches exactly otherwise would fail
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
