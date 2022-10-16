// 이중 포인터
#include <stdio.h>

int main()
{
    int *numPtr1;  // 단일 포인터 선언
    int **numPtr2; // 이중 포인터 선언
    int num1 = 10;

    numPtr1 = &num1;
    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장

    printf("%d\n", **numPtr2);

    return 0;
}