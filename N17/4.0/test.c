#include <stdio.h>

// void add()
// {
//     int x = 0;
//     static int y = 0;
//     printf("%d,%d,", x, y);
//     x = x + 3;
//     y = y + 5;
// }

int sub(int n)
{
    return (n / 10);
}

void sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{

    // 1.

    // int x = 0, a = 0, b = 0;
    // if (x = a + b)
    // {
    //     printf("* * * *\n");
    // }
    // else
    // {
    //     printf("# # # #\n");
    // }

    // 2.

    // int x = 1, y = 0, a = 5, b = 6;
    // switch (x)
    // {
    // case 1:
    //     switch (y)
    //     {
    //     case 0:
    //         a++;
    //         break;
    //     case 1:
    //         b++;
    //         break;
    //     }
    // case 2:
    //     a++;
    //     b++;
    //     break;

    // case 3:
    //     a++;
    //     b++;
    // }
    // printf("x=%d,b=%d", a, b);

    // 3.

    /** if的判定条件
            1.条件语句结果为0
            2.条件语句为假
    */

    // int i;
    // for (i = 1; i <= 5; i++)
    // {
    //     if (i%2)
    //     {
    //         putchar('*');
    //     }
    //     else
    //     {
    //         continue;
    //     }
    //     putchar('#');
    // }
    // putchar('%');

    // 4.

    // int i;
    // for (i = 0; i < 2; i++)
    // {
    //     add();
    // }

    // 5.

    // int *p1,*p2,*p;
    // int a = 5,b = 8;
    // p1 = &a;
    // p2 = &b;
    // if (a<b)
    // {
    //     p = p1;
    //     p1 = p2;
    //     p2 = p;
    // }
    // printf("%d,%d,",*p1,*p2);
    // printf("%d,%d",a,b);

    // 6.

    // int a[] = {2, 4, 6, 8, 10};
    // int y = 1;
    // int x, *p;
    // p = &a[1];
    // for (x = 0; x < 3; x++)
    // {
    //     y = *(p + x);
    //     printf("%d,",y);
    // }

    // 7.

    /*
         %s与%c的区别
            1.%s 输出字符串
            2.%c 输出单个字符
    */

    char s[] = "program", *p;
    for (p = s; p < s + 2; p++)  //这里的p相当于 char* p = "program"　这样是可行的
    {
        printf("%s\n", p);
    }

    // char s[] = "program";
    // char *p;
    // for (p = s; p < s + 2; p++)
    // {
    //     printf("%c\n", *p);
    // }

    // 8.

    // char a;
    // a = 'A' + '5' - '3';
    // printf("%c %d\n",a,a);

    // 9.

    // int x,y;
    // scanf("%d",&x);
    // y = sub(sub(x));
    // printf("%d\n",y);

    // 10.

    // int aa[10]= {10,9,8,7,6,5,4,3,2,1};
    // sort(aa,10);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d,",aa[i]);
    // }
    // printf("\n");

    return 0;
}