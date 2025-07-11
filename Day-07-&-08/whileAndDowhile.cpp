#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int i = 1; //initialize

    do {
        sum += i;
        i++; //update
    }while (i <= n); //break

    cout << sum;

    return 0;
}