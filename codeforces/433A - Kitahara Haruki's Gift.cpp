/*

  Link: http://codeforces.com/problemset/problem/433/A

*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, WT, macas[100 + 10];

bool solve() {
    int A, k;

    sort(macas, macas + n);

    if (WT % 2 != 0)
        return false;

    while (A < WT / 2 && k < n) {
        A += macas[k];
        k++;
    }

    if (A == WT / 2)
        return true;

    if (macas[0] == 100 && k < n) {
        A -= 100;
        A -= macas[k];
        A += macas[n - 1];

        if (A == WT / 2)
            return "YES";
    }

    return false;
}

int main() {

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &macas[i]);
        WT += macas[i];
    }


    if (solve()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
