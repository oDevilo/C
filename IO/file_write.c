#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    FILE * fp;
    char fname[50];//用于存放文件名

    printf("Enter the name of file\n");
    scanf("%s",fname);
    fp=fopen(fname,"w");//以只读方式打开文件
    if(fp==NULL)
    {
        printf("faile to open file\n");
        exit(1);
    }
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp);

    }
    fclose(fp);
    return 0;
}

