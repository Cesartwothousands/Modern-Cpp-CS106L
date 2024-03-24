// switchExample.c

#include <stdio.h>

int main(void)
{
    int a = 5, b = 3;
    switch (b - a)
    {
    case 1:
        printf("The value of b - a is 1\n");
        break;
    case 2:
        printf("The value of b - a is 2\n");
        break;
    case 3:
        printf("The value of b - a is 3\n");
        break;
    default:
        printf("The value of b - a is not 1, 2, or 3\n");
        break;
    }

    return 0;
}