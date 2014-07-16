#include <cstdio>

/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=41

The Skyline Problem

Input

The input is a sequence of building triples. All coordinates of buildings are integers less than 10,000
and there will be at least one and at most 5,000 buildings in the input ﬁle. Each building triple is
on a line by itself in the input ﬁle. All integers in a triple are separated by one or more spaces. The
triples will be sorted by Li
, the left x-coordinate of the building, so the building with the smallest left
x-coordinate is ﬁrst in the input ﬁle.

Output

The output should consist of the vector that describes the skyline as shown in the example above.
In the skyline vector (v1, v2, v3, . . . , vn−2, vn−1, vn), the vi such that i is an even number represent a
horizontal line (height). The vi such that i is an odd number represent a vertical line (x-coordinate).
The skyline vector should represent the “path” taken, for example, by a bug starting at the minimum
x-coordinate and traveling horizontally and vertically over all the lines that deﬁne the skyline. Thus
the last entry in all skyline vectors will be a 0.

Sample Input
1 11 5
2 6 7
3 13 9
12 7 16
14 3 25
19 18 22
23 13 29
24 4 28

Sample Output
1 11 3 13 9 0 12 7 16 3 19 18 22 3 23 13 29 0


*/

using namespace std;

int skyline[10001], l, t, r, i, f;

int main()
{

    while (scanf("%d %d %d", &l, &t, &r) == 3)
    {
        for (i = l; i < r; i++)
        {
            if (skyline[i] < t)
            {
                skyline[i] = t;
            }
        }
    }

    for (i = 0, f = 1; i <= 10001; i++)
    {
        if (skyline[i - 1] != skyline[i])
        {
            if (f == 1)
            {
                printf("%d %d", i, skyline[i]);
                f++;
            }
            else
            {
                printf(" %d %d", i, skyline[i]);
            }

        }

    }

    printf("\n");


    return 0;
};