/*

code: ARQUEOMG

link: http://br.spoj.com/problems/ARQUEOMG/

*/

#include <iostream>
#include <cstdio>

using namespace std;

int TC, a, b;

int main() {

    scanf("%d", &TC);

    while (TC--) {

        scanf("%d %d", &a, &b);

        if (a < 0 && b > 0) {
            printf("%d\n", (6000 + b) - (6001 + a));
        } else {
            printf("%d\n", (6000 + b) - (6000 + a));
        }

    }

}
