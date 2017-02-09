#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <sstream>
#include <iterator>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL

// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define REP(i, j, n) for (int i = (j); i<= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)

using namespace std;

/*
 * Title:
 * Sequência S II
 *
 * Timelimit: 1
 *
 * Description:
 * Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado
 * pela fórmula:
	S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
 *
 * Input:
 * Não há nenhuma entrada neste problema.
 *
 * Output:
 * A saída contém um valor correspondente ao valor de S.
 * O valor deve ser impresso com dois dígitos após o ponto decimal.
 *
 */

float sequenciaSII() {
    float result = 0.0;

    for (int i = 1, j = 1; i < 41; i+=2, j *= 2) {
        result += (i * 1.0) / j;
    }

    return result;
}

int main() {
    printf("%.2f\n", sequenciaSII());

    return 0;
}
