#include <iostream>
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    cout << "Enter your name:Ramona ";
    cin >> name;

    cout << "Enter your hometown:London ";
    cin >> hometown;

    cout << "Enter your age:33 ";
    cin >> age;
    cout << "Name: " << name << endl
         << "Hometown: " << hometown << endl
         << "Age: " << age << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    cout << " Ramona Czompa ";
    getline(cin, name); 
    cout << " London ";
    getline(cin, hometown);
    cout << "33 ";
    cin >> age;
   

    return 0;
}