#include <iostream>
using namespace std;

int main () {

    int num;
    cout << "Enter the number: ";
    cin >> num;
    int mul = 1, ans = 0, rem;

    while (num > 0) {
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 2;
    }
    cout << ans << endl;

    return 0;
}