#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("The sum of %d & %d is %d.", a, b, sum);

    getch();
    return 0;
}