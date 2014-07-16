#include <cstdio>

using namespace std;

int TC, N, H, count, result[17];

void hamming(int str[], int i, int k)
{
    if (k == H)
    {
        for (int j = 0; j < N - 1; j++) printf("%d", str[j]);
        printf("%d\n", str[N - 1]);
    }
    else
    {
        for (int j = N - 1; j > i; j--)
        {
            str[j] = 1;
            hamming(str, j, k + 1);
            str[j] = 0;
        }
    }
}

int main()
{
    scanf("%d", &TC);

    while (TC--)
    {

        scanf("%d %d", &N, &H);

        for (int i = 0; i < 17; i++)
        {
            result[i] = 0;
        }

        for (int i = N - H; i >= 0; i--)
        {
            result[i] = 1;
            hamming(result, i, 1);
            result[i] = 0;
        }

        if (TC)
        {
            printf("\n");
        }
    }

    return 0;
}
