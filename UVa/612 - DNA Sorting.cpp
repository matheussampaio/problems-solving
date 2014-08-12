#include <string>
#include <cstdio>
#include <iostream>
#include <algorithm>

/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=553

DNA Sorting

One measure of ``unsortedness'' in a sequence is the number of pairs of entries that are out of order with respect to each other. For instance, in the letter sequence ``DAABEC'', this measure is 5, since D is greater than four letters to its right and E is greater than one letter to its right. This measure is called the number of inversions in the sequence. The sequence ``AACEDGG'' has only one inversion (E and D)--it is nearly sorted--while the sequence ``ZWQM'' has 6 inversions (it is as unsorted as can be--exactly the reverse of sorted).


You are responsible for cataloguing a sequence of DNA strings (sequences containing only the four letters A, C, G, and T). However, you want to catalog them, not in alphabetical order, but rather in order of ``sortedness'', from ``most sorted'' to ``least sorted''. All the strings are of the same length.

Input

The first line of the input is an integer M, then a blank line followed by M datasets. There is a blank line between datasets.
The first line of each dataset contains two integers: a positive integer n (  $0 < n \le 50$) giving the length of the strings; and a positive integer m (  $0 < m \le 100$) giving the number of strings. These are followed by m lines, each containing a string of length n.

Output

For each dataset, output the list of input strings, arranged from ``most sorted'' to ``least sorted''. If two or more strings are equally sorted, list them in the same order they are in the input file.
Print a blank line between consecutive test cases.

Sample Input

1

10 6
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT


Sample Output

CCCGGGGGGA
AACATGAAGG
GATCAGATTT
ATCGATGCAT
TTTTGGCCAA
TTTGGCCAAA

*/

using namespace std;

int M, n, m, i;
string line, dataset[110];

int sortedness(string line) {
    if (!line.size())
        return 0;

    char c = line[0];
    int count = 0;

    for (int i = 1; i < line.size(); ++i) {
        if (c > line[i])
            count++;
    }

    return count + sortedness(line.substr(1, line.size()));
}

bool ValueCmp(string const &a, string const &b) {
    return sortedness(a) < sortedness(b);
}

int main() {

    // freopen("input.txt", "r", stdin);

    scanf("%d", &M);

    while (M--) {

        scanf("%d%*[ ]%d\n", &n, &m);

        for (i = 0; i < m; i++) {
            getline(cin, line);

            dataset[i] = line;
        }

        stable_sort(dataset, dataset + m, ValueCmp);

        for (int k = 0; k < m; k++) {
            cout << dataset[k] << endl;
        }

        if (M > 0)
            printf("\n");

    }

    return 0;
};