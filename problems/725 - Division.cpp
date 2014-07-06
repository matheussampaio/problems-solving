#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=666

Division

Write a program that finds and displays all pairs of 5-digit numbers that between them use the digits 0 through 9 once each, such that the first number divided by the second is equal to an integer N, where  $2
\le N \le 79$. That is,


abcde / fghij = N

where each letter represents a different digit. The first digit of one of the numerals is allowed to be zero.

Input

Each line of the input file consists of a valid integer N. An input of zero is to terminate the program.

Output

Your program have to display ALL qualifying pairs of numerals, sorted by increasing numerator (and, of course, denominator).
Your output should be in the following general form:


xxxxx / xxxxx = N

xxxxx / xxxxx = N

.

.


In case there are no pairs of numerals satisfying the condition, you must write ``There are no solutions for N.". Separate the output for two different values of N by a blank line.

Sample Input

61
62
0

Sample Output

There are no solutions for 61.

79546 / 01283 = 62
94736 / 01528 = 62


*/

using namespace std;

int N, numerator, denominator, count, i, k;
bool has_solution, first = true;
char nums[11], decimal[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool check()
{
    sprintf(nums, "%05d%05d", numerator, denominator);

    for (i = 0; i < 10; i++)
    {
        count = 0;

        for (k = 0; k < 10; k++)
        {
            if (nums[k] == decimal[i])
                count++;
        }

        if (count != 1)
            return false;

    }

    return true;
}

int main()
{

    // freopen("input.txt", "r", stdin);

    while (true)
    {

        scanf("%d\n", &N);

        if (!N)
            break;

        if (!first)
        {
            printf("\n");
        }

        has_solution = false;

        denominator = 1234;

        while (denominator <= 98765)
        {
            numerator = N * denominator;

            if (numerator > 98765)
                break;

            if (check())
            {
                printf("%05d / %05d = %d\n", numerator, denominator, N);
                has_solution = true;
            }

            denominator++;

        }

        if (!has_solution)
            printf("There are no solutions for %d.\n", N);

        first = false;

    }

    return 0;
};
