#include<iostream>
using namespace std;

class Engineer{
    public:
    string specilization;
    Engineer() {
        cout << "Hello Engineer\n";
    }
    void work() {
        cout << "I have specialization in " << specilization << endl;
    }
};

class Youtuber{
    public:
    int subs;
    Youtuber() {
        cout << "Hello Youtuber\n";
    }
    void contentcreator() {
       cout << "I have a subcriber base of " << subs << endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber{
    public:
    string name;
    CodeTeacher() {
        cout << "Hello CodeTeacher\n";
    }

    CodeTeacher(string specilization, int subs, string name){
        this->name = name;
        this->specilization = specilization;
        this->subs = subs;
    }
    void showcase() {
        cout << "My name is " << name << endl;
        work();
        contentcreator();
    }
};

int main() {
    // CodeTeacher A1 ("CSE", 2, "Shashwat");
    // A1.showcase();
    CodeTeacher A1;
}