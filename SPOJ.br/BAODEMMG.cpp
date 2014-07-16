/*

code: BAODEMMG

link: http://br.spoj.com/problems/BAODEMMG/

*/

#include <iostream>
#include <cstdio>

using namespace std;

int TC, a, s, sum;

int main() {

    scanf("%d", &TC);

    while (TC--) {

        scanf("%d", &s);

        sum = 0;

        for (int i = 0; i < s; i++) {
            scanf("%d", &a);

            sum += 3 * a;
        }

        if (s * 3 >= sum) {
            printf("nao precisa\n");
        } else {
            printf("precisa\n");
        }

    }

}
