/*

code: ALIENSMG

link: http://br.spoj.com/problems/ALIENSMG/

*/

#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int TC;

map<string, int> mDNA;

string palavra;

int main() {
    scanf("%d", &TC);

    while (TC != 0) {

        mDNA.clear();

        for (int i = 0; i < TC; i++) {
            cin >> palavra;

            sort(palavra.begin(), palavra.end());

            mDNA[palavra] += 1;
        }

        printf("%d\n", mDNA.size());

        scanf("%d", &TC);
    }

}
