#include <string>
#include <iostream>

using namespace std;

class Date {
public:
    explicit Date(int D, int M, int Y) : day(D), month(M), year(Y) {
        if (M < 1 || M > 12) {
            month = 1; // Establecer el mes como enero si es inválido
        }
        if (Y < 1900 || Y > 2050) {
            year = 1900; // Establecer el año como 1900 si es inválido
        }
    }

    void setDay(int daySet) {
        if (daySet >= 1 && daySet <= 31) {
            day = daySet;
        }
    }

    void setMonth(int monthSet) {
        if (monthSet >= 1 && monthSet <= 12) {
            month = monthSet;
        }
    }

    void setYear(int yearSet) {
        if (yearSet >= 1900 && yearSet <= 2050) {
            year = yearSet;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isLeapYear() const {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    void printDate() const {
        cout << "The Date is " << day << "/" << month << "/" << year << endl;
    }

    void printLeapYear() const {
        if (isLeapYear()) {
            cout << year << " is a leap year" << endl;
        } else {
            cout << year << " is not a leap year" << endl;
        }
    }

private:
    int day{1};
    int year{1900};
    int month{1};
};