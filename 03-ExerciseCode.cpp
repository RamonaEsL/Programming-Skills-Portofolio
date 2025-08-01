#include <iostream>           In this program I used the following varibles delcarations string name,string hometown and int age
                             which will store the required input. cout<< will display a message asking for input,while cin>> name will read the integer as the name, hometown or age variable
using namespace std;           The output is printed by the cout statement

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


#include <iostream>                       using getline allows the program to read a whole line of text including spaces
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
