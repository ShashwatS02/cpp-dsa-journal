#include <bits/stdc++.h>
using namespace std;

int main() {

    // int ans = 0;
    // int arr[20];
    // for (int i = 0; i < 20; i++) {
    //     cin >> arr[i];
    //     ans += arr[i];
    // }
    // cout << ans;

    // int ans = 0;
    // int arr[18];
    // for (int i = 0; i < 18; i++) {
    //     cin >> arr[i];
    //     ans += arr[i];
    // }
    // float average = (float)ans/18;
    // cout << average;


    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;
    // int arr[size];
    // int specialEle;
    // cout << "Enter your special element: ";
    // cin >> specialEle;
    // bool found = false;

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    //     if (arr[i] == specialEle) {
    //         cout << i;
    //         found = true;
    //         break;
    //     }
    // }
    // if (!found) {
    //     cout << -1 << endl;
    // }

    // char arr[26];
    // for (int i = 0; i < 26; i++) {
    //     arr[i] = 'a' + i; 
    // }
    // for (int i = 0; i < 26; i++) {
    //     cout << arr[i] << " "; 
    // }

    int n;
    cout << "Enter size of array (n > 3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Array size must be greater than 3.";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " unique elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element is: " << secondLargest;

    return 0;
}