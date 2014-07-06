#include <cstdio>
#include <iostream>
#include <stack>

/*
Problem:

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=614

Parentheses Balance
You are given a string consisting of parentheses () and []. A string of this type is said to be correct:

(a)
if it is the empty string
(b)
if A and B are correct, AB is correct,
(c)
if A is correct, (A) and [A] is correct.
Write a program that takes a sequence of strings of this type and check their correctness. Your program can assume that the maximum string length is 128.

Input

The file contains a positive integer n and a sequence of n strings of parentheses () and [], one string a line.
Output

A sequence of Yes or No on the output file.
Sample Input

3
([])
(([()])))
([()[]()])()
Sample Output

Yes
No
Yes

*/

using namespace std;

int count, i;

string line;
stack< char > pilha;

int main()
{

    // freopen("input.txt", "r", stdin);

    scanf("%d\n", &count);

    while (count--)
    {

        while (pilha.size() > 0)
        {
            pilha.pop();
        }

        getline(cin, line);

        for (i = 0; i < line.size(); i++)
        {

            if (line[i] == '(' || line[i] == '[')
            {
                pilha.push(line[i]);
            }
            else if (pilha.empty())
            {
                pilha.push('E');
                break;
            }
            else if (line[i] == ')' && pilha.top() == '(')
            {
                pilha.pop();
            }
            else if (line[i] == ']' && pilha.top() == '[')
            {
                pilha.pop();
            }
            else
            {
                pilha.push('E');
                break;
            }
        }

        if (pilha.size() == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
};
