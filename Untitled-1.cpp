#include <stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        printf("Первое число больше второго");
    }
    else if (x < y)
    {
        printf("Первое число меньше второго");
    }
    else {
        printf("Числа равны");
    }
}
