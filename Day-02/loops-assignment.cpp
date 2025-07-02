#include <iostream>
using namespace std;

int main() {

    //Problem 1
    // for (int i = 1; i <= 20; i++) {
    //     cout << "India will win the World Cup 2023" << endl;
    // }

    //Problem 2
    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i+=2) {
    //     cout << i << endl;
    // }


    //Problem 3
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++) {
        if (i%4 == 0) {
            cout << i << endl;
        }
    }


    return 0;
}