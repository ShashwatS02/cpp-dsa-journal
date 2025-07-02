#include<iostream>
using namespace std;

int main() {

    // for (int count = 1; count <= 5; count++) {
    //     cout << "Shash Attack" << endl;
    // }


    // int n;
    // cin >> n;
    // for (int count = 1; count <= n; count++) {
    //     cout << count << endl;
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // for (int count = 1; count <= n; count++) {
    //     cout << count << " Square is: " << count*count << endl;
    // }

    int num;
    cout << "Enter your number: ";
    cin >> num;

    for (int i = 2; i <= num; i+=2) {
        cout << i << " is even" << endl;
    }

    return 0;
}