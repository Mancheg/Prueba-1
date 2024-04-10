#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student estudiante1("Vicente", 12);

    string nameChange;
    int ageChange;
    
    cout << "Student" << estudiante1.getName() << "has the age of " << estudiante1.getAge() << endl;
    
    cout << "Enter your name to change ";
    cin >> nameChange;
    estudiante1.setName(nameChange);

    cout << "Enter your age to change ";
    cin >> ageChange;
    estudiante1.setAge(ageChange);

    cout << "Student" << estudiante1.getName() << "has the age of " << estudiante1.getAge() << endl;
    if (estudiante1.isOlder()) {
        cout << estudiante1.getAge << " is older than 18 years old" << endl;
    } 
    else {
        cout << estudiante1.getAge << " is not older than 18 years old" << endl;
    }


    Student estudiante2("Maria", 20);

    string nameChange;
    int ageChange;

    cout << "Student" << estudiante2.getName() << "has the age of " << estudiante2.getAge() << endl;

    cout << "Enter your name to change" 
    cin >> nameChange;
    estudiante2.setName(nameChange);

    cout << "Enter your age to change ";
    cin >> ageChange;
    estudiante2.setAge(ageChange);
    
    cout << "Student" << estudiante2.getName() << "has the age of " << estudiante2.getAge() << endl;
    
    if (estudiante2.isOlder()) {
        cout << estudiante2.getAge << " is older than 18 years old" << endl;
    } 
    else {
        cout << estudiante2.getAge << " is not older than 18 years old" << endl;
    }
    
    return 0;
}
