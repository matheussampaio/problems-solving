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
 * Divisores I
 *
 * Timelimit: 1
 *
 * Description:
 * Ler um número inteiro N e calcular todos os seus divisores.
 *
 * Input:
 * O arquivo de entrada contém um valor inteiro.
 *
 * Output:
 * Escreva todos os divisores de N, um valor por linha.
 *
 */

void every_divisor(int n) {
    Rep(i, n) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int X;

    cin >> X;

    every_divisor(X);

    return 0;
}
