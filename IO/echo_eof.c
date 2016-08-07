#include<stdio.h>
int main()
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        //现在结束程序改为CTRL+Z
        //有些系统是CTRL+D为文件结尾信号
        putchar(ch);
    }
    return 0;
}
