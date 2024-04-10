#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date fecha1(03, 01, 2020);
    Date fecha2(15, 11, 2019);
    Date fecha3(20, 12, 1500);

    cout << "Date 1: " << endl;
    fecha1.printDate();
    fecha1.printLeapYear();

    cout << "\nDate 2: " << endl; 
    fecha2.printDate();
    fecha2.printLeapYear();

    cout << "\nDate 3: " << endl;
    fecha3.printDate();
    fecha3.printLeapYear();

    return 0;
}