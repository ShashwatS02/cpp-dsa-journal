#include<bits/stdc++.h>
using namespace std;

class Human {
    protected:
    string name;
    int age;

    public:
    // Human() {
    //     cout << "Hello Human\n";
    // }
    // ~Human() {
    //     cout << "Hello Human\n";
    // }
    Human (string name, int age) {
        this-> name = name;
        this-> age = age;
    }
    void display() {
        cout << name << " " << age << endl; 
    }
    void work() {
        cout << "I am working\n";
    }
};

class Student: public Human {
    int roll_number, fees;
    public:
    Student(string name, int age, int roll_number, int fees): Human(name, age) {
        this->roll_number = roll_number;
        this->fees = fees;
    }
    // Student() {
    //     cout << "Hello Student\n";
    // }
    // ~Student() {
    //     cout << "Hello Student\n";
    // }
    void display() {
        cout << name << " " << age << " " << roll_number << " " << fees << endl; 
    }
};

int main() {

    Student A1("Shashwat",12,10,9000);
    A1.display();

    return 0;
}