#include <stdio.h>

// 1.我的写法
//  int main()
//  {

//     int n = 0;
//     scanf("%d", &n);
//     int str[n + 1];
//     printf("请按从小到大的顺序输入:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &str[i]);
//     }
//     int input = 0;
//     printf("请输入需要插入的数字:\n");
//     scanf("%d", &input);
//     for (int i = 0; i < n; i++)
//     {
//         if (input <= str[i])
//         {
//             for (int j = n; j > i; j--)
//             {
//                 str[j] = str[j - 1];
//             }
//             str[i] = input;
//             break;
//         }
//     }
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("%d ",str[i]);
//     }

// }

2.以下为更好的写法

#include <stdio.h>
#include <stdlib.h> // 为了使用动态内存分配函数

    int
    main()
{
    int n = 0;
    printf("请输入数组大小: ");
    scanf("%d", &n);

    // 使用动态内存分配来创建一个数组，以容纳用户输入的整数
    int *arr = (int *)malloc((n + 1) * sizeof(int));

    if (arr == NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }

    printf("请按从小到大的顺序输入整数:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int input = 0;
    printf("请输入需要插入的整数:\n");
    scanf("%d", &input);

    // 插入新整数并保持数组有序
    int index;
    for (index = n - 1; index >= 0 && arr[index] > input; index--)
    {
        arr[index + 1] = arr[index];
    }
    arr[index + 1] = input;
    n++; // 数组大小增加了一个元素

    printf("排序后的数组:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 释放动态分配的内存
    free(arr);

    return 0;
}

// 3.知识点练习

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char* str;
//     str = (char*)malloc(n*sizeof(char));
//     //  n*sizeof(char) 将n个char类型大小的字节的内存分配给str
//     strcpy(str,"China");
//     printf("%s\n",str);
//     free(str);
//     str = (char*)realloc(str,2*n*sizeof(char));
//     // 重新分配内存给 str ，若是 0，则释放 str的内存块，
//     strcat(str,"_exe");
//     printf("%s\n",str);
// //     str = (char*)calloc(n,1);
// //     strcpy(str,"China");
// //     printf("%s\n",str);
// //     free(str);

//     return 0;
// }