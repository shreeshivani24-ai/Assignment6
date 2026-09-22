# include <stdio.h>
int main()
{
    int n, i, c = 0, l, u, isprime;
    printf("Enter values of l and u: ");
    scanf("%d %d", &l, &u);
    printf("Prime numbers between %d and %d are: ", l, u);
    for(n = l; n <= u; n++)
    {
        if (n < 2)
        continue;

        isprime = 1;
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1 && i > 1)
            printf("%d ", n);
    }

return 0;
}
   