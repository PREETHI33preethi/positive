#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number \n");
    else if (num < 0)
        printf("%d is a negative number \n");
    else
        printf("zero");
}
