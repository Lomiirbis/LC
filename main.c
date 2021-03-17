#include <stdio.h>
#include <stdlib.h>

int les41(int n);
int les42(int a, int b);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    les41(n);
    printf("\n");

    int a, b;
    printf("Enter number A: ");
    scanf("%d", &a);
    printf("Enter number B: ");
    scanf("%d", &b);
    printf("Result: %d", les42(a, b));
    return 0;
}

int les41(int n)
{
    if (n >= 2)
        les41(n / 2);
        printf("%d ", n % 2);
}

int les42(int a, int b)
{
    return b == 1 ? a : a * les42(a, b - 1);
}
