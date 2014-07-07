/*

562 - Dividing coins

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=503

*/

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

int M, K, SUM, coins[110]; // coins[ M (<= 200)]
int memo[110][25010]; // dp table memo[money_left (<= 200)][garment_id (<= 20)]

int knapsack() {

    int target = SUM / 2;


    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= target; j++) {
            if (coins[i - 1] > j) {
                memo[i][j] = memo[i - 1][j];
            } else {
                memo[i][j] = max(memo[i - 1][j], memo[i - 1][j - coins[i - 1]] + coins[i - 1]);
            }
        }
    }

    return  SUM - memo[M][target] * 2;
}

int main() {
    int i, j, TC, score;

    // freopen("input.txt", "r", stdin);

    scanf("%d", &TC);

    while (TC--) {
        scanf("%d", &M);

        SUM = 0;

        for (i = 0; i < M; i++) {
            scanf("%d", &K);

            SUM += K;

            coins[i] = K; // to simplify coding, we store K in price[i][0]
        }

        memset(memo, 0, sizeof memo); // initialize DP memo table

        printf("%d\n", knapsack()); // start the top-down DP

    }
} // return 0;