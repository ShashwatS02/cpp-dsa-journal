#include <bits/stdc++.h>
using namespace std;

// void cube(int a) {
//     int ans = a*a*a;
//     cout << ans;
// }

// int reverseNum(int a) {
//     int lastDigit, ans = 0;
//     while (a) {
//         if (lastDigit > INT_MAX/10){
//             return 0;
//         }
//         lastDigit = a%10;
//         a /= 10;
//         ans = ans*10 + lastDigit;
//     }
//     return ans;
// }

// void swap (int &a,int &b){
//     int c;
//     c = b;
//     b = a;
//     a = c;

//     cout << a << " " << b << " " << c << endl;

// }

// void print (int n) {
//     while (n) {
//         cout << "Hello Coder Army" << endl;
//         n--;
//     }
// }

int combination (int n, int r) {

    if (r > n) {
        return 0;
    }

    int ans1 = 1, ans2 = 1, ans3 = 1;
    for (int i = 1; i <= n; i++) {
        ans1 *= i;
    }
    for (int i = 1; i <= r; i++) {
        ans2 *= i;
    }
    for (int i = 1; i <= n-r; i++) {
        ans3 *= i;
    }

    int res = ans1/(ans2*ans3);

    return res;
}

int main() {

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;

    // cube(n);

    // cout << reverseNum(n);

    // int a, b, c;
    // cin >> a >> b >> c;

    // swap(a, b);

    // cout << a << " " << b <<" "<< c << endl;
    // int a, b;
    // cin >> a >> b;

    // swap(a,b);

    // cout << a << " " << b << endl;


    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // print(n);

    int n, r;
    cin >> n >> r;
    cout << combination(n, r) << endl;

    return 0;
}