#include <iostream>
using namespace std;

int main() {

    int row, col;

    // for(row = 1; row <= 5; row++) {
    //     for (col = 1; col <= row; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(row = 1; row <= 5; row++) {
    //     for (col = 1; col <= row; col++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for(row = 1; row <= 5; row++) {
    //     for (col = 1; col <= row; col++) {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // for(row = 1; row <= 5; row++) {
    //     for (col = row; col >= 1; col--) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for(row = 1; row <= 5; row++) {
    //     for (col = 1; col <= row; col++) {
    //         char name = 'a' + (row-1);
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= 5; row++) {
    //     for (col = 1; col <= 5-row+1; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (row = 5; row >= 1; row--) {
    //     for (col = 1; col <= row; col++){
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= 5; row++) {
    //     for (col = 5; col >= 5-row+1; col--){
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    //OR

    for (row = 5; row >= 1; row--) {
        for (col = 5; col >= row; col--){
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}