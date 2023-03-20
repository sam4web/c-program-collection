#include <stdio.h>
#include <conio.h>

int main()
{
    int num, product;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        product = num * i;
        printf("%d X %d = %d\n", num, i, product);
    }

    getch();
    return 0;
}