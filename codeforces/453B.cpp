#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

/*

Link:

*/

int n, numbers[100000 + 10];

int main() {

    cin >> n;
    int min = 1000000;
    int minIndex = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);

        if (numbers[i] < min) {
            min = numbers[i];
            minIndex = i;
        }
    }

    int count = 0;

    if (n > 2) {

        int index = minIndex;

        for (int i = 0; i < n - 1; ++i) {
            if (numbers[(index + i) % n] > numbers[(index + 1 + i) % n]) {
                cout << "-1";
                return 0;
            }
        }

        cout << (n - minIndex) % n;


        return 0;
    }