#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int index, int n) {

    if (index == n) return;
    cout << arr[index] << " ";
    print(arr, index+1, n);
}

void print1 (int arr[], int index, int n) {
    if (index == n) return;
    print1(arr, index+1, n);
    cout << arr[index] << " ";
    
}

void print2 (int arr[], int index) {
    if (index == -1) return;
    cout << arr[index] << " ";
    print2 (arr, index-1);
}

void print3 (int arr[], int index) {
    if (index == -1) return;
    print3 (arr, index-1);
    cout << arr[index] << " ";
}

int main() {

    int arr[] = {3, 4, 1, 2, 8};
    // print(arr, 0 ,5);

    // print1(arr, 0, 5);

    // print2(arr, 4);

    print3(arr, 4);

    return 0;
}