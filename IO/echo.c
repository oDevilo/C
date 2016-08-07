#include<stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!='#')
    {
        //getchar()每次出入一个字符，putchar每次输出一个字符
        //输入包含#后回车，程序将终止
        //缓冲区分为1.完全缓冲 2.行缓冲区
        //完全缓冲区在缓冲区满时被清空，大小取决于系统
        //行缓冲区在遇到换行字符时被清空(键盘输入时行缓冲)
        putchar(ch);
    }
    return 0;
}
