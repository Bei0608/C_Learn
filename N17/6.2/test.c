#include<stdio.h>

int Min(int a,int b,int c)
{
    int n = a;
    n = n<b? n:b;
    n = n<c? n:c;
    return n;

}

int main()
{

    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",Min(a,b,c));
    

    return 0;
}