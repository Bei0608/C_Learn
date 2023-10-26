#include <stdio.h>

int main()
{

    int srt[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&srt[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += srt[i][j];
            }
        }
    }
    printf("%d", sum);

    return 0;
}