/*
Write a program to print the pattern:

input :5

output:

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",n-(i-j));
        }
        printf("\n");
    }

    return 0;
}