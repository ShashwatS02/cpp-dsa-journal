#include<bits/stdc++.h>
using namespace std;

class Human {
    // private:
    // int a;
    // protected:
    // int b;
    // void fun() {
    //     a = 10;
    //     b = 20;
    //     c = 30;
    // }
    // public:
    // int c;

    string religion,color;
    public:
    string name;
    int age,weight;
};

class Student: protected Human {
    private:
    int roll_number,fees;
    public:
    Student(string name, int age, int weight , int roll_number, int fees) {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    void display() {
        cout << name <<  "'s age is " << age << " weight is " << weight << " roll number is " << roll_number << " and fees is " << fees << endl;
    }
};

class Teacher: public Human {
    int salary, id;

};

int main() {

    // Human Shashwat;
    // Shashwat.c = 10;
    // Shashwat.fun();

    Student A("Rohit", 12, 80, 23, 2000);
    A.display();
    Teacher B;
    B.name = "Shalini";
    
    return 0;
}