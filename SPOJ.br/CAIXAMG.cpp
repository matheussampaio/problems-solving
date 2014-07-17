/*

code: CAIXAMG

link: http://br.spoj.com/problems/CAIXAMG/

*/

#include <iostream>
#include <cstdio>

using namespace std;

int A, B;

float caixa(float n) {
    return (A - (2 * n)) * (B - (2 * n)) * n;
}

float back(float a, int places) {
    float mid = a * 0.5;
    // float left = a * 0.25;
    // float rigth = a * 0.75;

    float diff = 1 / pow(10, places);

    float v_left = caixa(mid - (1 / ));
    float v_rigth = caixa(rigth);

    if (v_left > v_rigth) {
        printf("%.4f %.4f\n", left, v_left);
        return back(left);
    }

    if (v_rigth > v_left) {
        printf("%.4f %.4f\n", rigth, v_rigth);
        return back(rigth);
    }

    return a;
}

int main() {
    float value;

    while (scanf("%d %d", &A, &B) && A && B) {

        value = back(A, 0);

        printf("%.4f %.4f\n", value, caixa(value));

    }

}
