#include <iostream>
using namespace std;

int main() {

    //while loop

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int i = 1;

    // while (i <= n) {
    //     if (i%2 == 0) {
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    //do while loop

    // do {
    //     if (i%2 == 0) {
    //         cout << i << " ";
    //     }
    //     i++;
    // } while (i <= n);


    //while loop 
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int fact = 1, i = 1;

    // while (i <= n) {
    //     fact*=i;
    //     i++;
    // }
    // cout << fact;

    //do while loop
    // do {
    //     fact *= i;
    //     i++;
    // } while (i <= n);

    // cout << fact;

    int n;
    cout << "Enter your number: ";
    cin >> n;
    int i = 1;

    while (i <= n) {
        if (i%3 == 0 && i%5 == 0) {
            i++;
            continue;
        }
        else {
            cout << i << " ";
            i++;
        } 
    }

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;

    // switch (n)
    // {
    //     case 1:
    //     cout << "Jan";
    //     break;
    //     case 2:
    //     cout << "Feb";
    //     break;
    //     case 3:
    //     cout << "Mar";
    //     break;
    //     case 4:
    //     cout << "Apr";
    //     break;
    //     case 5:
    //     cout << "May";
    //     break;
    //     case 6:
    //     cout << "Jun";
    //     break;
    //     case 7:
    //     cout << "Jul";
    //     break;
    //     case 8:
    //     cout << "Aug";
    //     break;
    //     case 9:
    //     cout << "Sep";
    //     break;
    //     case 10:
    //     cout << "Oct";
    //     break;
    //     case 11:
    //     cout << "Nov";
    //     break;
    //     case 12:
    //     cout << "Dec";
    //     break;
    //     default :
    //     break;
    // }

    // char ch = 'A';

    // while (ch <= 'Z') {
    //     cout << ch << " ";
    //     ch++;
    // }

    // ch = 'a';

    // while (ch <= 'z') {
    //     cout << ch << " ";
    //     ch++;
    // }

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int i = 2;
    // bool isPrime = true;

    // if (n < 2) {
    //     isPrime = false;
    // }
    // else {
    //     while (i <= n/2) {
    //         if (n%i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //         i++;
    //     }
    // }

    // if (isPrime) {
    //     cout << n << " is a Prime number.";
    // }
    // else {
    //     cout << n << " is not a Prime number."; 
    // }

    return 0;
}