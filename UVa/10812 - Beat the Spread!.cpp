#include <cstdio>

/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1753

Problem D: Beat the Spread!

Superbowl Sunday is nearly here. In order to pass the time waiting for the half-time commercials and wardrobe malfunctions, the local hackers have organized a betting pool on the game. Members place their bets on the sum of the two final scores, or on the absolute difference between the two scores.
Given the winning numbers for each type of bet, can you deduce the final scores?

The first line of input contains n, the number of test cases. n lines follow, each representing a test case. Each test case gives s and d, non-negative integers representing the sum and (absolute) difference between the two final scores. For each test case, output a line giving the two final scores, largest first. If there are no such scores, output a line containing "impossible". Recall that football scores are always non-negative integers.

Sample Input
2
40 20
20 40

Output for Sample Input
30 10
impossible
*/


using namespace std;

int main() {

    int n, i, s, d;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &s);
        scanf("%d", &d);

        bool hasResult = false;

        int scoreB = 0;

        for (int scoreA = s; scoreA >= 0; scoreA--) {
            scoreB = s - scoreA;

            if (scoreA - scoreB == d) {
                printf("%d %d\n", scoreA, scoreB);
                hasResult = true;
                break;
            }
        }

        if (!hasResult) {
            printf("impossible\n");
        }

    }

    return 0;
};