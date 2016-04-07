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
 * Soma de Ímpares Consecutivos III
 *
 * Timelimit: 1
 *
 * Description:
 * Leia um valor inteiro N que é a quantidade de casos de teste que vem a
 * seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve
 * apresentar a soma de Y ímpares consecutivos a partir de X inclusive o
 * próprio X se ele for ímpar. Por exemplo:
	para a entrada 4 5, a saída deve
 * ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
	para a entrada 7 4, a
 * saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13
 *
 * Input:
 * A primeira linha de entrada é um inteiro N que é a quantidade de casos de
 * teste que vem a seguir. Cada caso de teste consiste em uma linha contendo
 * dois inteiros X e Y.
 *
 * Output:
 * Imprima a soma dos consecutivos números ímpares a partir do valor X.
 *
 */

int N, X, Y;

int sum_odd(int X, int Y) {
    int sum = 0;

    for (int i = X; i < X + (Y * 2); i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {

    cin >> N;


    while (N--) {
        cin >> X;
        cin >> Y;

        cout << sum_odd(X, Y) << endl;
    }

    return 0;
}
