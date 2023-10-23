#include<stdio.h>

int Max(int a,int b,int c)
{
    int z = a;
    z = z>b? z:b;
    z = z>c? z:c;

    return z;
}

int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",Max(a,b,c));
    

    return 0;
}