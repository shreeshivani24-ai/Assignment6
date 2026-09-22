# include <stdio.h>
int main()
{
    int n,o, r = 0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    o=n;
    while (n !=0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (r == o)
        printf("it is a palindrome.", o);
    else
        printf("it is not a palindrome.", o);
    return 0;
}