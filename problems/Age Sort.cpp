#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>

/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2457

Age Sort
Input: Standard Input
Output: Standard Output
Time limit: 5.000 seconds

You are given the ages (in years) of all people of a country with at least 1 year of age. You know that no individual in that country lives for 100 or more years. Now, you are given a very simple task of sorting all the ages in ascending order.

Input
There are multiple test cases in the input file. Each case starts with an integer n (0<n<=2000000), the total number of people. In the next line, there are n integers indicating the ages. Input is terminated with a case where n = 0. This case should not be processed.

Output
For each case, print a line with n space separated integers. These integers are the ages of that country sorted in ascending order.

Warning: Input Data is pretty big (~  25 MB) so use faster IO.

Sample Input
5
3 4 2 1 5
5
2 3 2 3 1
0

Output for Sample Input
1 2 3 4 5
1 2 2 3 3

Note: The memory limit of this problem is 2 Megabyte Only.

*/

using namespace std;

int num, i;
map<int, int> ages;
map<int, int>::iterator iter;

int main() {

    freopen("input.txt", "r", stdin);

    int N;

    while (true) {
        scanf("%d", &N);

        if (N == 0)
            break;

        for (i = 0; i < N; i++) {
            scanf("%d", &num);
            ages[num]++;
        }

        for (iter = ages.begin(); iter != ages.end(); ++iter) {
            for (i = 0; i < iter->second; i++) {
                if (distance(iter, ages.end()) == 1 && i + 1 == iter->second) {
                    printf("%d", iter->first);
                } else {
                    printf("%d ", iter->first);
                }
            }
        }

        printf("\n");

        ages.clear();
    }

    return 0;
};
