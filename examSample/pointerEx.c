// 이중 포인터
#include <stdio.h>

int main()
{
    int *numPtr1;
    int num1 = 10;

    numPtr1 = &num1;
    *numPtr1 = 20;

    printf("%d\n", *numPtr1);
    printf("%d\n", num1);

    return 0;
}