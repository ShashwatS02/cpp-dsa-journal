#include <bits/stdc++.h>
using namespace std;

void print(int num, int N) {
    
    //Base case
    if (num == N) {
        cout << num << endl;
        return;
    }
    cout << num << endl;
    print (num + 1, N);
}

void printNum (int N) {

    if (N == 1) {
        cout << N << endl;
        return;
    }
    printNum (N - 1);
    cout << N << endl;
}

void printeven (int num, int N) {

    if (num > N) {
        return;
    }
    cout << num << " ";
    printeven (num + 2, N);
}

void printevenNum (int N) {

    if (N == 2) {
        cout << N << " ";
        return;
    }
    
    printevenNum (N - 2);
    cout << N << " ";
}

int main() {

    //print number form 1 to n
    // int N;
    // cin >> N;
    // print(1, N);

    //another method
    // int n;
    // cin >> n;

    // printNum(n);

    //print even number from 1 to N
    // int N;
    // cin >> N;

    // printeven(2, N);

    //another method
    int N;
    cin >> N;

    if (N%2 == 1) N--;

    printevenNum(N);

    return 0;
}