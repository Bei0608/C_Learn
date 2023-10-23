#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3

void increment()
{
    int x = 0;
    x++;
    printf("%d", x);
}

int max(int x, int y)
{
    int z;
    z = (x > y) ? x : y;
    return z;
}

int fun(int k)
{
    if (k == 1)
    {
        return 1;
    }
    else
    {
        return fun(k - 1) * k;
    }
}

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += i;
    }
    return s;
}

int main()
{

    // 1.

    // char *p;
    // p = (char *)malloc(sizeof(char) * 20);
    // strcpy(p, "welcome");
    // for (int i = 6; i >= 0; i--)
    // {
    //     putchar(*(p + i));
    // }
    // printf("\n-");
    // free(p);

    // 2.

    // int a = 12, b = 12;
    // printf("%d %d", --a, ++b);

    // 3.

    // int a = 5, b = 4, c = 3, d = 2;
    // if (a > b > c)
    // {
    //     printf("%d\n", d);
    // }
    // else if ((c - 1 >= d) == 1)
    // {
    //     printf("%d\n", d + 1);
    // }
    // else
    // {
    //     printf("%d\n", d + 2);
    // }

    // 4.

    // int x = 0, y = 5, z = 3;
    // while (z-- > 0 && ++x < 5)
    // {
    //     y = y - 1;
    // }
    // printf("%d,%d,%d", x, y, z);

    // 5.

    // increment();
    // increment();
    // increment();

    // 6.

    // int a = 1;
    // int b = 2;
    // int c = max(a, b);
    // printf("max is %d\n", c);

    // 7.

    // int x = 011;
    // printf("%d\n", ++x);

    // 8.

    // int x = 1;
    // int y = 0;
    // if (!x)
    // {
    //     y++;
    // }
    // else if (x == 0)
    // {
    //     if (x)
    //     {
    //         y += 2;
    //     }
    // }
    // else
    // {
    //     y += 3;
    // }
    // printf("%d\n", y);

    // int x = 1;
    // int y = 0;
    // if (!x) y++;
    // else if (x == 0)
    // if (x) y += 2;
    // else y += 3;
    // printf("%d\n", y);

    // 9.

    // printf("%d\n", fun(3));

    // 10.

    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printf("%d", sum(a, 10));

    // 选择 14.
    // int n = 'e';
    // switch (n--)
    // {
    // default:
    //     printf("error ");
    // case 'a':
    // case 'b':
    //     printf("good ");
    //     break;
    // case 'c':
    //     printf("pass ");
    // case 'd':
    //     printf("warn ");
    // }

    // 15.

    // int a[3] = {0,1,2};
    // printf("%d",a[1]);

    // 17.

    // int a[][3] = {1,2,3,4,5,6,7,8,9};
    // printf("%d",sizeof(a)/sizeof(a[0]));

    //
    // printf("%d",PI*2*2);

    // char *str4 = "string";
    // str4 = "china";
    // printf("%s", str4);
}