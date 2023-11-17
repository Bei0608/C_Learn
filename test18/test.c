#include <stdio.h>
// 文件的读写练习
fputc_fgetc()
{
    // int fputc( int c, FILE *fp );
    // int fgetc( FILE *fp );

    // 写
    FILE *ps = fopen("test.txt", "r");
    if (ps == NULL)
    {
        perror("fopen");
        return 1;
    }
    // 写
    fputc('w', ps);

    // 读
    int ch = fgetc(ps);
    printf("%c", ch);
    // 关闭文件
    fclose(ps);
    ps = NULL;
}

fputs_fgets()
{
    // char *fgets( char *s， int n， FILE *fp );
    //  int fputs( const char *s, FILE *fp );
    FILE *ps = fopen("test.txt", "r");
    if (ps == NULL)
    {
        perror("fopen");
        return 1;
    }
    // 写
    // fputs("hello\n",ps);
    // fputs("hello\n",ps);

    // 读
    char str[20];
    fgets(str, 5, ps); // 注意： 5 包括/0
    printf("%s", str);

    // 关闭文件
    fclose(ps);
    ps = NULL;
}

// fscanf_fprintf()
// {
//     struct S s = {"zhengsan", 18, 50000};
//     struct S s = {0};
//     FILE *ps = fopen("test.txt", "r");
//     if (ps == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     // int fprintf( FILE *fp, const char* format, 输出1, 输出2 );
//     // int fscanf( FILE *fp, const char* format, 地址1，地址2… );

//     // fprintf(ps,"%s %d %f",s.arr,s.age,s.score);

//     fscanf(ps, "%s %d %f", s.arr, &(s.age), &(s.score));
//     printf("%s %d %f", s.arr, s.age, s.score);

//     fclose(ps);
//     ps = NULL;
// }
struct S
{
    char arr[10];
    int age;
    float score;
};

int main()
{
    // 二进制写法
    struct S ss = {"zhengsan", 18, 500};
    FILE *ps = fopen("test.txt", "r");
    if (ps == NULL)
    {
        perror("fopen");
        return 1;
    }
    //size_t fwrite ( void * ptr, size_t size, size_t count, FILE *fp );
    // fwrite(&ss,sizeof(struct S),1,ps);

    //size_t fread ( void *ptr, size_t size, size_t count, FILE *fp );
    fread(&ss,sizeof(struct S),1,ps);
    printf("%s %d %f", ss.arr, ss.age, ss.score);
    fclose(ps);
    ps = NULL;
    return 0;
}