#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/*

Link:

*/

int n, matrix[101 + 10][101 + 10];

int main() {

    cin >> n;

    memset(matrix, 0, sizeof matrix);

    int mid = n / 2;
    int line = 0;
    int d = 0;

    for (int i = 0; i < (n + 1 ) / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j >= mid - i && j <= mid + i) {
                matrix[i][j] = 1;
                matrix[n - i - 1][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                cout << "D";
            } else {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}