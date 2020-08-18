#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);
    int i = 1, k = 1, l = 1;
    while (k <= n)
    {
        printf("*");
        k++;
    }
    printf("\n");
    while (i <= n - 2)
    {
        int j = 1;
        while (j <= n)
        {
            if (j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    while (l <= n)
    {
        printf("*");
        l++;
    }
    return 0;
}