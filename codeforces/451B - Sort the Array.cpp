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

int n, array[1000000], bitmask[1000000], array2[1000000], inicial, final;

void swap(int a, int b) {
    int tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}

int main() {

    clr(array, 0);

    // freopen("input.txt", "r", stdin);

    cin >> n;

    Rep(i, n) {
        scanf("%d", &array[i]);
        array2[i] = array[i];
    }

    inicial = -1;
    final = -1;

    Rep(i, n - 1) {
        if (array[i] > array[i + 1]) {
            bitmask[i] = 1;
            bitmask[i + 1] = 1;
        }
    }

    Rep(i, n) {
        if (bitmask[i] == 1) {
            if (inicial == -1)
                inicial = i;

            final = i;
        }
    }

    sort(array2 + 1, array2 + n + 1);

    int i = inicial;
    int j = final;

    while (i < j) {
        swap(i, j);
        i++;
        j--;
    }

    bool yes = true;

    Rep(i, n) {
        if (array[i] != array2[i]) {
            yes = false;
            break;
        }
    }

    if (yes) {
        if (inicial == -1 && final == -1) {
            inicial = 1;
            final = 1;
        }

        printf("yes\n%d %d\n", inicial, final);
    } else {
        printf("no\n");
    }


    return 0;
}
