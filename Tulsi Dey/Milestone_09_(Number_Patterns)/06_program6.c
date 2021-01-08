/*
Write a program to print the pattern:

input :5

output:

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            printf("%d ", n - (j - i));
        }
        printf("\n");
    }

    return 0;
}