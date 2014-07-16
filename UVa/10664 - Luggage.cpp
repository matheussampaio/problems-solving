/*

10664 - Luggage

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1605

*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <sstream>

using namespace std;

int TC; //                          - Quantidade de casos de testes.
int W; // (1 <= W <= 30)            - Peso do item.
int total;
int items[20 + 10];
int counter;
int memo[20 + 10][100 + 10]; //  - DP:

int number;

string line;

bool luggage() {
    if (total % 2 != 0)
        return false;

    memset(memo, 0, sizeof memo); // initialize DP memo table

    for (int i = 1; i <= counter; i++) {
        for (int j = 1; j <= total / 2; j++) {
            if (items[i - 1] > j) {
                memo[i][j] = memo[i - 1][j];
            } else {
                memo[i][j] = max(memo[i - 1][j], items[i - 1] + memo[i - 1][j - items[i - 1]] );
            }
        }
    }

    return memo[counter][total / 2] == total / 2;
}


int main() {

    // freopen("input.txt", "r", stdin);

    scanf("%d\n", &TC);

    while (TC--) {
        total = 0;
        counter = 0;

        getline(cin, line);

        istringstream iss(line);

        while (iss >> number) {
            items[counter] = number;
            total += items[counter];
            counter++;
        }

        if (luggage()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

} // return 0;