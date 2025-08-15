#include <bits/stdc++.h>
using namespace std;

void fun3(int n) {
    if (n == 0) {
        cout << "Happy Birthday\n";
        return;
    }
    if (n == 1) {
        cout << n << " day left for birthday\n";
    }
    if (n != 1) {
        cout << n << " days left for birthday\n";
    }

    fun3(n-1);
}

void print (int n) {

    //termination condition
    if (n == 1) {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    print (n - 1);
}

void printEven (int n) {

    if (n == 2) {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    printEven(n - 2);
}

int main() {

    // int n = 3;

    //Iterative approach
    // for (int i = n; i > 0; i--) {
    //     cout << i << " days left for birthaday." << endl;
    // }
    // cout << "Happy Birthday\n";

    // fun3(10);

    // int n = 5;

    // //print n to 1
    // print (n);

    //print even number n to 2
    int n = 10;
    printEven(n);

    return 0;
}