#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int TC;

string palavra, palavra_upper_order, palavra_upper;

bool order;

int main() {
    scanf("%d", &TC);

    while (TC--) {
        order = false;

        cin >> palavra;

        palavra_upper = palavra;

        transform(palavra_upper.begin(), palavra_upper.end(), palavra_upper.begin(), ::toupper);

        palavra_upper_order = palavra_upper;

        sort(palavra_upper_order.begin(), palavra_upper_order.end());

        if (palavra_upper_order == palavra_upper) {
            order = true;
        }

        if (order) {
            for (int i = 1; i < palavra_upper_order.size(); i++) {
                if (palavra_upper_order.at(i) == palavra_upper_order.at(i - 1)) {
                    order = false;
                }
            }
        }

        if (order) {
            cout << palavra << ": O" << endl;
        } else {
            cout << palavra << ": N" << endl;
        }

    }

}
