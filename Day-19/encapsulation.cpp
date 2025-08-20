#include <bits/stdc++.h>
using namespace std;

class Customer {
    string name;
    int account_number, balance, age;

    public:
    Customer (string name, int account_number, int balance, int age) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
        }
        else cout << "Invalid amount" << endl;
    }
    void updateage(int age) {
        if (age > 0 && age < 100) {
            this -> age = age;
        }
        else {
            cout << "Invalid age\n";
        }
    }
    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
        }
    }
    void display() {
        cout << name << " " << account_number << " " << balance << " " << age << endl;
    }
};

int main() {

    Customer A1("Mohit", 1, 1000, 23);
    Customer A2("Shashwat", 2, 1800, 21);
    Customer A3("Mohan", 3, 2000, 28);
    A1.updateage(24);
    A1.deposit(200);
    A1.display();

    return 0;
}