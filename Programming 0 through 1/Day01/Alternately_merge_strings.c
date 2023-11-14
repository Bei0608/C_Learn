#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 原始的 mergeAlternately 函数
char *mergeAlternately(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char *merged = (char *)malloc(len1 + len2 + 1); // +1 用于 '\0'
    int i = 0, n1 = 0, n2 = 0;

    // 交替合并字符
    while (n1 < len1 && n2 < len2)
    {
        merged[i++] = word1[n1++];
        merged[i++] = word2[n2++];
    }

    // 如果 word1 还有剩余字符，添加到合并字符串中
    if (n1 < len1)
    {
        while (n1 < len1)
        {
            merged[i++] = word1[n1++];
        }
        merged[i] = '\0'; // 为了正确性，确保字符串末尾有 '\0'
    }
    // 如果 word2 还有剩余字符，添加到合并字符串中
    else if (n2 < len2)
    {
        while (n2 < len2)
        {
            merged[i++] = word2[n2++];
        }
        merged[i] = '\0';
    }
    // 如果两个字符串都为空
    else
    {
        merged[i] = '\0';
        return merged;
    }
    merged[i] = '\0'; // 为了完整性，确保字符串末尾有 '\0'
    return merged;
}

// 2. 优化后的 mergeAlternately 函数
// 这里主要是省略了判断语句，当不满足循环条件时，会自动向下运行，所以，不需要添加判断语句
// 减少了运行所用的时间
char *mergeAlternatelyOptimized(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char *merged = (char *)malloc(len1 + len2 + 1);
    int i = 0, n1 = 0, n2 = 0;

    // 交替合并字符
    while (n1 < len1 && n2 < len2)
    {
        merged[i++] = word1[n1++];
        merged[i++] = word2[n2++];
    }

    // 将 word1 的剩余字符添加到合并字符串中
    while (n1 < len1)
    {
        merged[i++] = word1[n1++];
    }

    // 将 word2 的剩余字符添加到合并字符串中
    while (n2 < len2)
    {
        merged[i++] = word2[n2++];
    }

    merged[i] = '\0'; // 确保字符串末尾有 '\0'
    return merged;
}
// 3. 优化
//将原本的三循环判定，简省为一个 For 循环便可搞定

char *mergeAlternately(char *word1, char *word2)
{
    int len1 = strlen(word1), len2 = strlen(word2);
    char *merged = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    int i, n1, n2;
    for (i = 0, n1 = 0, n2 = 0; n1 < len1 || n2 < len2; n1++, n2++)
    {
        if (n1 < len1)
            merged[i++] = word1[n1];
        if (n2 < len2)
           merged[i++] = word2[n2];
    }
    merged[i] = '\0';
    return merged;
}
int main()
{
    char word1[100]; // 这里数组需要指定大小，不指定会报错
    char word2[100];
    scanf("%s", word1);
    scanf("%s", word2);
    // printf("%s\n",word1);
    // printf("%s\n",word2);
    // printf("%d",strlen(word1));  //查看长度是否正确
    char *merged = mergeAlternatelyOptimized(word1, word2);
    printf("%s", merged);
    free(merged); // 释放内存
    merged = NULL;
    return 0;
}
