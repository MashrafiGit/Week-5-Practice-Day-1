#include <stdio.h>
int main()
{
    int a[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int row = 0;
    int col = 0;
    int found = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
                found = 1;
                break;
            }

            if (found == 1)
            {
                break;
            }
        }
    }

    int b = row - 3;
    int c = col - 3;

    int step = abs(b) + abs(c);

    printf("%d", step);

    return 0;
}