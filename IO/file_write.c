#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    FILE * fp;
    char fname[50];//���ڴ���ļ���

    printf("Enter the name of file\n");
    scanf("%s",fname);
    fp=fopen(fname,"w");//��ֻ����ʽ���ļ�
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

