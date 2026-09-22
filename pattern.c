# include <stdio.h>
int main()
{
    int i, j, m, n = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
       
    }

    return 0;
}
