#include<stdio.h>
int main()
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        //���ڽ��������ΪCTRL+Z
        //��Щϵͳ��CTRL+DΪ�ļ���β�ź�
        putchar(ch);
    }
    return 0;
}
