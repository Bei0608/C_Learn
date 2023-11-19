#include <stdio.h>
#include<string.h>

void moveZeroes(int *nums, int numsSize)
{
    int temp; // 临时变量，用于存储当前元素的值

    int s = 0; // s表示非零元素应该被放置的位置索引

    // 遍历数组
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i]; // 保存当前元素的值
        nums[i] = 0;    // 将当前位置的元素置为零

        // 如果当前元素不为零，将其放置到非零元素应该在的位置
        if (temp != 0)
        {
            nums[s++] = temp;
        }
    }
}

int main()
{
    int str[] = {0,2,5,0,8,9};
    int len = sizeof(str)/sizeof(str[0]);
    moveZeroes(str,len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ",str[i]);
    }
    
    return 0;
}