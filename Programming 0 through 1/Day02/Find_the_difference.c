// 找不同
/**
 * 目标：给定两个字符串 s 和 t ，它们只包含小写字母。
 *      字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母
 *      请找出在 t 中被添加的字母。
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 自己写的（初试）
// 缺点：缺少一些判定，若 s 与 t 的字符相同，返回为空，但本应返回为一个字符
char findTheDifference01(char *s, char *t)
{
    char *s1 = s;
    char *t1 = t;
    char result = 0;
    if (*s1 == '\0')
    {
        result = *t;
    }

    while (*s1 != '\0')
    {
        if (*t1 != *s1)
        {
            s1++;
            result = *t1;
        }
        else
        {
            t1++;
            s1 = s;
        }
    }
    // if (result == NULL)   属于是硬凑的了,力扣上 超出时间限制
    // {
    //     result = *(--t1);
    // }

    return result;
}
// 方法一 （ASCII码值）
// 既然返回的是一个字符,而且输入的全是小写字母,不妨用  ASCII码值来计算
// 逻辑重点：字符在内存中的存放方式是 ASCII码值
//时间复杂度：O(N)。
//空间复杂度：O(1)。
char findTheDifference02(char *s, char *t)
{
    // 初始化两个变量 sum_s 和 sum_t，用于存储字符串 s 和 t 中字符的 ASCII 码之和
    int sum_s = 0;
    int sum_t = 0;

    // 遍历字符串 s，计算字符的 ASCII 码之和
    while (strlen(s) != 0)
    {
        // 将当前字符的 ASCII 码加到 sum_s 中，并将指针 s 向后移动
        sum_s += (int)*(s++);
    }

    // 遍历字符串 t，计算字符的 ASCII 码之和
    while (strlen(t) != 0)
    {
        // 将当前字符的 ASCII 码加到 sum_t 中，并将指针 t 向后移动
        sum_t += (int)*(t++);
    }

    // 返回两个字符串的字符 ASCII 码之和的差值，即为两个字符串中不同字符的 ASCII 码
    return (char)(sum_t - sum_s);
}

// 方法二 位运算（太妙了！！！）
//时间复杂度：O(N)。
//空间复杂度：O(1)。
char findTheDifference03(char *s, char *t)
{
    // 获取字符串 s 和 t 的长度
    int n = strlen(s), m = strlen(t);

    // 初始化一个变量 ret，用于存储异或的结果
    int ret = 0;

    // 对字符串 s 中的每个字符执行异或运算
    for (int i = 0; i < n; i++)
    {
        ret ^= s[i];
    }

    // 对字符串 t 中的每个字符执行异或运算
    for (int i = 0; i < m; i++)
    {
        ret ^= t[i];
    }

    // 返回异或结果，即两个字符串中不同的字符
    return ret;
}

int main()
{
    char *s[100];
    char *t[100];
    scanf("%s", &s);
    scanf("%s", &t); // 由题目可知 t的长度比s大一位
    char ret = findTheDifference02(s, t);
    printf("%c", ret);
    return 0;
}