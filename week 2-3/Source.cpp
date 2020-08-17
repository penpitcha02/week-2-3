#include<stdio.h>
int main()
{
	int a = 1, b = 1, m;
	printf("Enter number : ");
	scanf_s("%d", &m);
    while (a <= m)
    {
        if (a == 1 || a == m )
            printf("*");
        else
            printf(" ");
    }

    return 0;
}