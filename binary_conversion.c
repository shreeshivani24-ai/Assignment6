# include <stdio.h>
int main()
{
    int n, b = 0, r, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 2;
        b = b + r * place;
        n = n / 2;
        place = place * 10;
    }
    printf("Binary number is: %d", b);
    return 0;
}