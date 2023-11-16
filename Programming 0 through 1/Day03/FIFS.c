// 找出字符串中第一个匹配项的下标
/**
 * 输入：haystack = "sadbutsad", needle = "sad"
    输出：0
    解释："sad" 在下标 0 和 6 处匹配。
    第一个匹配项的下标是 0 ，所以返回 0 。
*/
#include <stdio.h>
#include <string.h>
// 暴力匹配
// 时间复杂度：O(n×m)
// 空间复杂度：O(1)

// 函数名: strStr
// 输入参数: haystack - 目标字符串，needle - 要搜索的子字符串
// 返回值: 成功时返回子字符串在目标字符串中的起始位置，失败时返回-1
int strStr(char *haystack, char *needle)
{
    char *be = haystack; // 指向目标字符串的当前位置
    char *host = needle; // 指向要搜索的子字符串的当前位置
    int b = 0;           // 记录目标字符串的起始位置
    // int bbe = strlen(haystack);
    // int hhost = strlen(needle);
    // int count = 0;

    // 循环直到子字符串或目标字符串为空
    while (strlen(host) != 0 && strlen(be) != 0)
    {
        if (*host == *be)
        {
            // 如果当前字符匹配，继续比较下一个字符
            host++;
            be++;
        }
        else
        {
            // 如果字符不匹配，将目标字符串的起始位置移动到下一个位置
            b++;
            host = needle;
            be = haystack;
            be += b;
        }
    }
    // for (int i = 0, j = 0; i <= bbe ,j <= hhost; i++, j++)
    // {
    //     if (*host == *be)                                //问题：循环判定有问题
    //     {
    //         count = i;
    //         host++;
    //         be++;
    //     }
    //     else
    //     {
    //         host = needle;
    //         be++;
    //         j = 0;
    //     }
    // }
    

    // 检查是否成功匹配整个子字符串
    if (strlen(host) == 0)
    {
        // 匹配成功，返回子字符串在目标字符串中的起始位置
        return b;
    }
    else
    {
        // 匹配失败，返回-1
        return -1;
    }
}

int main()
{
    char *haystack[100];
    char *needle[100];
    scanf("%s", &haystack);
    scanf("%s", &needle);
    int ret = strStr(haystack, needle);
    printf("%d", ret);
    return 0;
}
