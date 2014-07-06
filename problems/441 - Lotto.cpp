#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=382

Lotto

In the German Lotto you have to select 6 numbers from the set {1,2,...,49}.

A popular strategy to play Lotto - although it doesn't increase your chance of winning - is to select a subset S containing k (k>6) of these 49 numbers, and then play several games with choosing numbers only from S.

For example, for k=8 and S = 1,2,3,5,8,13,21,34 there are 28 possible games: [1,2,3,5,8,13], [1,2,3,5,8,21], [1,2,3,5,8,34], [1,2,3,5,13,21], ..., [3,5,8,13,21,34].

Your job is to write a program that reads in the number k and the set S and then prints all possible games choosing numbers only from S.

Input Specification

The input file will contain one or more test cases.

Each test case consists of one line containing several integers separated from each other by spaces. The first integer on the line will be the number k (6 < k < 13). Then k integers, specifying the set S, will follow in ascending order.

Input will be terminated by a value of zero (0) for k.

Output Specification

For each test case, print all possible games, each game on one line.

The numbers of each game have to be sorted in ascending order and separated from each other by exactly one space. The games themselves have to be sorted lexicographically, that means sorted by the lowest number first, then by the second lowest and so on, as demonstrated in the sample output below.

The test cases have to be separated from each other by exactly one blank line. Do not put a blank line after the last test case.

Sample Input

7 1 2 3 4 5 6 7
8 1 2 3 5 8 13 21 34
0

Sample Output

1 2 3 4 5 6
1 2 3 4 5 7
1 2 3 4 6 7
1 2 3 5 6 7
1 2 4 5 6 7
1 3 4 5 6 7
2 3 4 5 6 7

1 2 3 5 8 13
1 2 3 5 8 21
1 2 3 5 8 34
1 2 3 5 13 21
1 2 3 5 13 34
1 2 3 5 21 34
1 2 3 8 13 21
1 2 3 8 13 34
1 2 3 8 21 34
1 2 3 13 21 34
1 2 5 8 13 21
1 2 5 8 13 34
1 2 5 8 21 34
1 2 5 13 21 34
1 2 8 13 21 34
1 3 5 8 13 21
1 3 5 8 13 34
1 3 5 8 21 34
1 3 5 13 21 34
1 3 8 13 21 34
1 5 8 13 21 34
2 3 5 8 13 21
2 3 5 8 13 34
2 3 5 8 21 34
2 3 5 13 21 34
2 3 8 13 21 34
2 5 8 13 21 34
3 5 8 13 21 34

*/

using namespace std;

int k, numbers[15];
int i1, i2, i3, i4, i5, i6;
bool first = true;

void print_combinations()
{
    for (i1 = 0; i1 < k - 5; i1++)
    {
        for (i2 = i1 + 1; i2 < k - 4; i2++)
        {
            for (i3 = i2 + 1; i3 < k - 3; i3++)
            {
                for (i4 = i3 + 1; i4 < k - 2; i4++)
                {
                    for (i5 = i4 + 1; i5 < k - 1; i5++)
                    {
                        for (i6 = i5 + 1; i6 < k; i6++)
                        {
                            printf("%d %d %d %d %d %d\n", numbers[i1], numbers[i2], numbers[i3], numbers[i4], numbers[i5], numbers[i6]);
                        }
                    }
                }
            }
        }
    }
}

int main()
{

    // freopen("input.txt", "r", stdin);

    while (true)
    {

        scanf("%d", &k);

        if (!k)
            break;

        if (first)
            first = false;
        else
            printf("\n");

        for (i1 = 0; i1 < k; i1++)
        {
            scanf("%d", &numbers[i1]);
        }

        print_combinations();

    }

    return 0;
};
