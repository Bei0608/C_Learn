#include <stdio.h>

swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int arr[10] = {0};
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
    }

// 定义 n 个数
    // int n = 0;
    // sacnaf("%d", % n);
    // int arr[n];
    // int sz = sizeof(arr) / sizeof(arrp[0]);
    // for (int i = 0; i < sz - 1; i++)
    // {
    //     for (int j = 0; j < sz - i - 1; j++)
    //     {
    //         if (arr[i] > arr[i + 1])
    //         {
    //             // 此处可写成指针的形式
    //             //  swap(&arr[i],&ar[i+1]);
    //             temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //         }
    //     }
    // }

//  此为题目要求
    for (int j = 0; j < 10; j++) // 此处改为 j<10-1,第二个for循环改为 i<10-j-1,可省略下面 i的if判断语句
    {
        for (int i = 0; i < 10 - j; i++)
        {
            if (i < 10 - j - 1)
            {
                if (arr[i] > arr[i + 1])
                {
                    // 此处可写成指针的形式
                    //  swap(&arr[i],&ar[i+1]);
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}