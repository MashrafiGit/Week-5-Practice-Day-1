#include <stdio.h>

void print_1_to_n(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    printf("%d\n", i);
    print_1_to_n(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_1_to_n(n, 1);

    return 0;
}