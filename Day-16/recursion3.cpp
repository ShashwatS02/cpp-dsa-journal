#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n*fact(n - 1);
}

int sum (int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int power(int num, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return num;
    }
    return num*power(num, n-1);
}

int sqSum (int n) {
    if (n == 1) {
        return 1;
    }
    return n*n + sqSum(n - 1);
}

int main() {

    int n;
    cin >> n;

    //factorial of a number n
    // if(n < 0) {
    //     cout << "Factorial is not possible\n";
    //     return 0;
    // } 

    // cout << fact(n);

    //sum of first n natural numbers
    // cout << sum(n) << endl;

    //power of 2 raised to the power of n
    // cout << pow(2,n);

    //sum of square of n numbers
    cout << sqSum(n);

    return 0;
}