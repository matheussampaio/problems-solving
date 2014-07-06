/*

562 - Dividing coins

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=503

*/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>

int M, K, price[110]; // price[ M (<= 200)]
int memo[110][25]; // dp table memo[money_left (<= 200)][garment_id (<= 20)]

int divide(int coins_left, int diff)
{

    return 0;
}

int main()
{
    int i, j, TC, score;

    freopen("input.txt", "r", stdin);

    scanf("%d", &TC);

    while (TC--)
    {
        scanf("%d", &M);

        for (i = 0; i < M; i++)
        {
            scanf("%d", &K);

            price[i] = K; // to simplify coding, we store K in price[i][0]
        }

        memset(memo, -1, sizeof memo); // initialize DP memo table

        printf("%d\n", divide(M, 0)); // start the top-down DP

    }
} // return 0;