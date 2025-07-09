#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter your number: ";
    cin >> n;

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n+1; col++) {
    //         cout << 4 << " ";
    //     }
    //     cout << endl;
    // }
    
    // for (row = 1; row <= n+1; row++) {
    //     for (col = 1; col <= n; col++) {
    //         cout << col*col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n+1; col++) {
    //         cout << col*col*col << " ";
    //     }
    //     cout << endl;
    // }

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n+1; col++) {
            char name = 'F'+col-1;
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}