#include <cstdio>
#include <cmath>

using namespace std;

int d, a, b, count, solution[9];

bool place(int queen, int row) {
    for (int prev = 1; prev <= queen - 1; prev++) { // check previously placed queens
        if (solution[prev] == row || (abs(solution[prev] - row) == abs(prev - queen))) {
            return false; // an infeasible solution if share same row or same diagonal
        }
    }

    return true;
}

void NQueens(int queen) {
    for (int row = 1; row <= 8; row++) {
        if (place(queen, row)) { // if can place this queen at this row?
            solution[queen] = row; // put this queen in this row
            if (queen == 8 && solution[b] == a) { // a candidate solution & (a, b) has 1 queen
                printf("%2d      %d", ++count, solution[1]);
                for (int j = 2; j <= 8; j++) printf(" %d", solution[j]);
                printf("\n");
            } else {
                NQueens(queen + 1); // recursively try next position
            }
        }
    }
}

int main() {
    scanf("%d", &d);

    while (d--) {

        scanf("%d %d", &a, &b);

        count = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");

        NQueens(1);

        if (d) {
            printf("\n");
        }
    }

    return 0;
}
