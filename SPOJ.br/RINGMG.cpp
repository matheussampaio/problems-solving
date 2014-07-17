/*

code: RINGMG

link: http://br.spoj.com/problems/RINGMG/

*/


/*

code: RINGMG

link: http://br.spoj.com/problems/RINGMG/

*/


#include <iostream>
#include <cstdio>

using namespace std;

int postos[1000 + 10][2];

int N, P, C, comb;

bool backtrack_rigth(int n, int k, int combustivel) {
    if (n == N) {
        return true;
    }

    combustivel += postos[k][0];

    if (combustivel >= postos[k][1]) {
        return backtrack_rigth(n + 1, (k + 1) % N, combustivel - postos[k][1]);
    }

    return false;
}

bool backtrack_left(int n, int k, int combustivel) {
    if (n == N) {
        return true;
    }

    combustivel += postos[k][0];

    int index =  k - 1 >= 0 ? k - 1 : N - 1;

    if (combustivel >= postos[index][1]) {

        return backtrack_left(n + 1, index, combustivel - postos[index][1]);
    }

    return false;
}

int main() {

    while (scanf("%d", &N) == 1 && N != 0) {

        for (int i = 0; i < N; i++) {
            scanf("%d", &postos[i][0]);
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &postos[i][1]);
        }

        for (int i = 0; i < N; i++) {
            if (backtrack_rigth(0, i, 0)) {
                printf("%d ", i + 1);
                break;
            }
        }

        for (int i = 0; i < N; i++) {
            if (backtrack_left(0, i, 0)) {
                printf("%d ", i + 1);
                break;
            }
        }

        printf("\n");
    }
}
