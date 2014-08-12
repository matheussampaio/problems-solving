/*

  Link: http://codeforces.com/problemset/problem/443/A

*/

#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int n, m;

int main() {

    map<char, int> letters;

    string line;

    getline(cin, line);

    for (int i = 0; i < line.length(); i++) {
        char l = line.at(i);

        if (l != '{' && l != '}' && l != ',' && l != ' ') {
            letters[l] += 1;
        }
    }

    cout << letters.size();

    return 0;
}
