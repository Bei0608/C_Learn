#include <stdio.h>
#include <stddef.h>

struct a
{
    char ch;
    int num;
};

int main()
{
    // struct a a1 = {'a', 10};
    // // printf("%d\n",offsetof(struct a));
    // printf("%d\n", sizeof(struct a));
    // printf("%d\n",offsetof(struct a,ch));
    // printf("%d\n",offsetof(struct a,num));

    // 练习1
    struct S1
    {
        char c1;
        int i;
        char c2;
    };
    printf("%d\n", sizeof(struct S1)); // 12

    // 练习2
    struct S2
    {
        char c1;
        char c2;
        int i;
    };
    printf("%d\n", sizeof(struct S2)); // 8

    // 练习3
    struct S3
    {
        double d;
        char c;
        int i;
    };
    printf("%d\n", sizeof(struct S3)); // 16

    // 练习4-结构体嵌套问题
    struct S4
    {
        char c1;
        struct S3 s3;
        double d;
    };
    printf("%d\n", sizeof(struct S4)); // 32

    return 0;
}