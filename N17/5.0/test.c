// #include <stdio.h>
// 1 .

// void maxvalue(int *a, int n, int *pmax)
// {
//     int i;

//     *pmax = *a;

//     for (i = 1; i < n; i++)
//     {
//         if (*(a + i) > *pmax)
//         {
//             *pmax = *(a + i);
//         }
//     }
// }

// int main()
// {

//     int a[8] = {10, -1, 8, 30, 90, -67, 0, 66};
//     int max;
//     maxvalue(a, 8, &max);
//     printf("max=%d\n", max);
//     return 0;
// }

// 2.

#include<stdio.h>

int main()
{

    int i, j;
    for (i = 1; i < 100; i++)
    {
        if (i % 3 == 0 && i % 10 == 6 && (j=i)!=0)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
