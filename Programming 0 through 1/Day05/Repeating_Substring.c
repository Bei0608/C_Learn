// 重复的子字符串
#include <stdio.h>
#include <stdbool.h> //使用布尔类型的前提
#include <string.h>
#include <stdlib.h>
// 没成功
//  bool repeatedSubstringPattern(char *s)
//  {
//      int count[26] = {0}; // 假设只考虑小写字母 ，注意，必须初始化为0
//      int len = strlen(s);
//      if (len == 1)
//      {
//          return true;
//      }
//      int str[26] = {0};
//      int j = 0;
//      int k = 0;
//      // 统计每个字符出现的次数
//      for (int i = 0; i < len; i++) // 其实跟写法1的qsort类似，都是先将字符串进行排序
//      {
//          count[s[i] - 'a']++;
//      }
//      for (k = 0, j = 0; k < 26; k++)
//      {
//          if (count[k] != 0)
//          {
//              str[j] = count[k];
//              j++;
//          }
//      }
//      for (int u = 0; u < j - 1; u++)
//      {
//          if (str[u] != str[u + 1])
//          {
//              return false;
//          }
//      }
//      return true;
//  }
// 写法1.
bool repeatedSubstringPattern(const char *s)
{
    int len = strlen(s);

    for (int i = 1; i * 2 <= len; i++)
    {
        if (len % i == 0)
        {
            bool isRepeated = true;
            for (int j = i; j < len; j++)
            {
                if (s[j] != s[j - i])
                {
                    isRepeated = false;
                    break;
                }
            }
            if (isRepeated)
            {
                return true;
            }
        }
    }

    return false;
}
// 写法1的优化
bool repeatedSubstringPattern(const char *s)
{
    int len = strlen(s);

    for (int i = 1; i * 2 <= len; i++)
    {
        if (len % i == 0 && strncmp(s, s + i, len - i) == 0)
        {
            return true;
        }
    }
}
    return false;
    int main()
    {
        char *s[100];
        scanf("%s", &s);
        bool ret = repeatedSubstringPattern(s);
        printf("%d", ret);
        return 0;
    }

    /**
     *   判断条件：
     *      1.单个字符，判断为 false
     *      2.要求对称，（可知排列数组不可取）
     *      3.异或，行不通
     *      4.ASCII码值.行不通
     *      5.
     **/
