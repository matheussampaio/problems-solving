/*

10130 - SuperSale

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1071

*/

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int TC; // (1 <= TC <= 1000)        - Quantidade de casos de testes.
int N; // (1 <= N <= 1000)          - Quantidade de items.
int P; // (1 <= P <= 100)           - Valor do item.
int W; // (1 <= W <= 30)            - Peso do item.
int people; // (1 <= people <= 100) - Quantidade de pessoas.
int MW; // (1 <= MW <= 30)          - Maximo peso que a pessoa pode carregar.

int peopleWeigth[100 + 10]; //           - Quantidade maxima de peso que i-th pessoa pode carregar.
int price[1000 + 10]; //                 - Valor do i-th item.
int weights[1000 + 10]; //               - Peso do i-th item.

int memo[1000 + 10][30 + 10]; //  - DP:

int supersale() {
    memset(memo, 0, sizeof memo); // initialize DP memo table

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= 30; ++j) {
            if (weights[i - 1] > j) {
                memo[i][j] = memo[i - 1][j];
            } else {
                memo[i][j] = max(memo[i - 1][j], price[i - 1] + memo[i - 1][j - weights[i - 1]] );
                // memo[i][j] = max(memo[i - 1][j], memo[i - 1][j - coins[i - 1]] + coins[i - 1]);
            }
        }
    }

    int result = 0;

    for (int i = 0; i < people; ++i) {
        result += memo[N][peopleWeigth[i]];
    }

    return result;
}


int main() {

    freopen("input.txt", "r", stdin);

    scanf("%d", &TC);

    while (TC--) {

        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &P, &W);
            price[i] = P;
            weights[i] = W;
        }

        scanf("%d", &people);

        for (int i = 0; i < people; i++) {
            scanf("%d", &MW);
            peopleWeigth[i] = MW;
        }

        printf("%d\n", supersale());
    }


} // return 0;