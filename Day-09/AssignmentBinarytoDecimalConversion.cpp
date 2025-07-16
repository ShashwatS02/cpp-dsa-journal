#include <iostream>
using namespace std;

int main() {

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num /= 10) {
    //     rem = num%10;
    //     ans += rem*mul;
    //     mul *= 2;
    // }

    // cout << ans;

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num /= 2) {
    //     rem = num%2;
    //     ans += rem*mul;
    //     mul *= 10;
    // }

    // cout << ans;

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num = num>>1) {
    //     rem = num&1;
    //     ans += rem*mul;
    //     mul *= 10;
    // }

    // cout << ans;

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num /= 8) {
    //     rem = num%8;
    //     ans += rem*mul;
    //     mul *= 10;
    // }

    // cout << ans;

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num /= 10) {
    //     rem = num%10;
    //     ans += rem*mul;
    //     mul *= 8;
    // }

    // cout << ans;

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // for (; num > 0; num /= 10) {
    //     rem = num%10;
    //     ans += rem*mul;
    //     mul *= 2;
    // }



    // int rem1, ans1 = 0, mul1 = 1;

    // for (; ans > 0; ans /= 8) {
    //     rem1 = ans%8;
    //     ans1 += rem1*mul1;
    //     mul1 *= 10;
    // }

    // cout << ans1;

    int num;
    cout << "Enter your number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    for (; num > 0; num /= 10) {
        rem = num%10;
        ans += rem*mul;
        mul *= 8;
    }



    int rem1, ans1 = 0, mul1 = 1;

    for (; ans > 0; ans /= 2) {
        rem1 = ans%2;
        ans1 += rem1*mul1;
        mul1 *= 10;
    }

    cout << ans1;

    return 0;
}