#include<stdio.h>

int Factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return Factorial(n-1) * n;
    }
    
}

int main()
{

    int n = 0;
    scanf("%d",&n);
    printf("%d",Factorial(n));
    return 0;
}