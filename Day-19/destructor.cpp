#include <bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int *data;
    
    public:
    Customer() {
        name = "4";
        cout << "constructor is " << name << endl;
    }
    //constructor
    // Customer() {
    //     name = "rohit";
    //     data = new int;
    //     *data = 10;
    //     cout << "Constructor is called\n";
    // }
    Customer(string name) {
        this->name = name;
        cout << "constructor is " << name << endl;  //will print in normal order.
    }
    //destructor
    // ~Customer() {
    //     cout << "Destructor is called\n";
    // }
    ~Customer() {
        cout << "constructor is " << name << endl; //will print in reverse order.
    }
};

int main() {
    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 = new Customer;
    delete A4;
}