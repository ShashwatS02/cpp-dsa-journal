#include <bits/stdc++.h>
using namespace std;

int main() {

    // //array create karna hai, jo store karega address
    // int n, m; //n = rows, m = cols
    // cin >> n >> m;

    // int **ptr = new int *[n];

    // //created 2d array using pointers
    // for (int i = 0; i < n; i++) {
    //     ptr[i] = new int[m];
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> ptr[i][j];
    //     }
    // }

    // //print the value
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << ptr[i][j] << " ";
    //     } 
    //     cout << endl;
    // }

    // //release the memory, heap mein
    // for (int i = 0; i < n; i++) {
    //     delete[] ptr[i];
    // }
    // delete[] ptr;

    //3d array
    int l,b,h;

    cin >> l >> b >> h;

    int ***ptr = new int **[l];

    //create 2d array and store it's address in ptr
    for (int i = 0; i < l; i++) {
        ptr[i] = new int *[b];
        for (int j = 0; j < b; j++) {
        ptr[i][j] = new int[h];
    }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < h; k++) {
               ptr[i][j][k] = i+j+k; 
            }
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < h; k++) {
               cout << ptr[i][j][k]<< " "; 
            }
        }
    }


    return 0;
}