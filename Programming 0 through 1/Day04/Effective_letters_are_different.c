// 有效的字母异位词
#include <stdio.h>
#include <stdbool.h> //使用布尔类型的前提
#include <string.h>
// 尝试1：
// 缺点： 部分情况下不正确
// 例如：s = "xaaddy" ,t = "xbbccy"
bool isAnagram(char *s, char *t)
{
    int n = strlen(s);
    int m = strlen(t);
    int ret_n = 0;
    int ret_m = 0;
    int sum_n = 0;
    int sum_m = 0;
    for (int i = 0; i < n; i++)
    {
        ret_n ^= s[i];
        sum_n -= s[i];
    }
    for (int i = 0; i < m; i++)
    {
        ret_m ^= t[i];
        sum_m -= t[i];
    }
    if (ret_n == ret_m && sum_n == sum_m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// 尝试2：
// 结构：超时了，pass
// bool isAnagram(char *s, char *t)
// {
//     char *ss = s;
//     char *tt = t;
//     int n = strlen(s);
//     int m = strlen(t);
//     if (n!=m)
//     {
//         return false;
//     }

//     while (strlen(tt) != 0 && strlen(ss) != 0)
//     {
//         if (*ss == *tt)
//         {
//             *ss = ' ';
//             ss = s;
//             tt++;
//         }
//         else
//         {
//             ss++;
//         }
//     }
//     if (strlen(tt) == 0)
//     {
//         return true;
//     }
//     else if (strlen(ss) == 0)
//     {
//         return false;
//     }
// }

// 正确写法
// 1.

//  比较函数，用于排序
int compare(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

bool isAnagram(char *s, char *t)
{
    int n = strlen(s);
    int m = strlen(t);

    // 如果两个字符串长度不同，肯定不是字母异位词
    if (n != m)
    {
        return false;
    }

    // 对字符串进行排序
    qsort(s, n, sizeof(char), compare); // qsort 用于排序，可以试着改变compare的返回值对其进行升序或降序
    qsort(t, m, sizeof(char), compare);

    // 比较排序后的字符串是否相等
    if (strcmp(s, t) == 0)  //strcmp 比较字符串大小
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 正确写法
// 2.

// 计数排序函数
void countSort(char *str)
{
    int count[26] = {0}; // 假设只考虑小写字母 ，注意，必须初始化为0
    int len = strlen(str);

    // 统计每个字符出现的次数
    for (int i = 0; i < len; i++)  //其实跟写法1的qsort类似，都是先将字符串进行排序
    {
        count[str[i] - 'a']++;
    }

    // 根据统计结果重构字符串
    int index = 0;
    for (int i = 0; i < 26; i++)        
    {
        while (count[i] > 0)
        {
            str[index++] = 'a' + i;
            count[i]--;
        }
    }
}

bool isAnagram(char *s, char *t)
{
    int n = strlen(s);
    int m = strlen(t);

    // 如果两个字符串长度不同，肯定不是字母异位词
    if (n != m)
    {
        return false;
    }

    // 对字符串进行计数排序
    countSort(s);
    countSort(t);

    // 比较排序后的字符串是否相等
    if (strcmp(s, t) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char *s[100];
    char *t[100];
    scanf("%s", &s);
    scanf("%s", &t);
    bool ret = isAnagram(s, t);
    printf("%d", ret);
    return 0;
}

/**
 * 总结：
 *      1.学习一下哈希表
 *      2.善用库函数，并尝试理解其原理
 *      3.做题不要太过局限，尝试转变思路
 * */