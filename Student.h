#include <string>
#include <iostream>

using namespace std;

class Student{
    public: 
        explicit Student (string namestudent, int Agestudent)
        :name{namestudent}{
            if (Agestudent > 0) {
                age = Agestudent;
            }
        }

    void setName (string nameSet){
        name = nameSet;
    }

    void setAge (int ageSet){
        age = ageSet;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    bool isOlder() const {
        if (age >= 18){
            return true;
        }
        else {
            return false;
        }
    }

    private:
        string name;
        int age{0};
}