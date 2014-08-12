/*

  Link: http://codeforces.com/problemset/problem/432/A

*/
#include <iostream>
#include <cstdio>

using namespace std;

int n, k, persons, valids;


int main() {

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &persons);

        if (persons + k <= 5) {
            valids++;
        }
    }

    printf("%d", valids / 3);

    return 0;
}
