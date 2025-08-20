#include <bits/stdc++.h>
using namespace std;

class Student {
    //private: (implicitly private)

    public:
    string name;
    int age, roll_number;
    string grade;

    //function getter and setter
    public:
    void setname(string s) {
        name = s;
    }
    void setage(int a) {
        age = a;
    }
    void setroll_number(int r) {
        roll_number = r;
    }
    void setgrade(string s) {
        grade = s;
    }

    void getname() {
        cout << name << endl;
    }

    void getage() {
        cout << age << endl;
    }

    int getroll_number() {
        return roll_number;
    }
};

int main() {

    // Student S1;
    // S1.name = "Shashwat";
    // S1.age = 21;
    // S1.roll_number = 21;
    // S1.grade = "A+";
    // cout << S1.age << endl;
    
    Student S1;
    S1.setname("Virat");
    S1.setage(35);
    S1.setroll_number(18);
    S1.setgrade("B+");
    S1.getname();
    S1.getage();
    cout << S1.getroll_number() << endl;

    return 0;
}