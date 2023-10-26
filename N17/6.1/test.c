#include <stdio.h>

int main()
{

    int n = 0;
    scanf("%d", &n);
    if (n < 60)
    {
        printf("%c", 'E');
    }
    else if (n >= 60 && n < 70)
    {
        printf("%c", 'D');
    }
    else if (n >= 70 && n < 80)
    {
        printf("%c", 'C');
    }
    else if (n >= 80 && n < 90)
    {
        printf("%c", 'B');
    }
    else if (n >= 90 && n <= 100)
    {
        printf("%c", 'A');
    }
    else
    {
        printf("输入有误");
    }

    return 0;
}