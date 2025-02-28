/*
 Amerike university
 Author: Julio López
 Practica #: 3
 Fecha: 27/02/25
 Description: This program shall display a prompt for the user to write its personal information
*/

#include <iostream>
using namespace std;
int main() {
    string Name;
    string LastName;
    int Age;
    float HeightInMeters;

    cout << "Write your name";

    cin >> Name;

    cout << "Write your last name";

    cin >> LastName;

    cout << "Write your age";

    cin >> Age;

    cout << "Write your height (in meters)";

    cin >> HeightInMeters; 

    cout << "Name: " << Name << endl;
    cout << "LastName: " << LastName << endl;
    cout << "Age: " << Age << endl;
    cout << "Height in Meters: " << HeightInMeters << endl;

    return 0;


} 
