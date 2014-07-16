/*

code: NUMEROMG

link: http://br.spoj.com/problems/NUMEROMG/

*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <stack>

using namespace std;

int TC, decimal;
map<char, int> alfa;
string a, b;

char alpha[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

long to_dec(string s) {
    long sum = 0;

    for (int i = 0; i < s.size(); i++) {
        sum += alfa[s.at(s.size() - i - 1)] * pow(36, i);
    }

    return sum;
}

void to_36(long num) {
    stack<int> pilha;

    while (num >= 36) {
        pilha.push(num % 36);

        num = num / 36;
    }

    pilha.push(num);

    while (pilha.size() > 0) {
        cout << alpha[pilha.top()];
        pilha.pop();
    }

    cout << endl;
}


int main() {
    for (int i = 0; i < 36; i++) {
        alfa[alpha[i]] = i;
    }

    cin >> a;
    cin >> b;

    while (a != "0" && b != "0") {
        to_36(to_dec(a) + to_dec(b));

        cin >> a;
        cin >> b;
    }

}