#include<stdio.h>
void mikado(int);
int main()
{
    int pooh=2;
    int * p1= &pooh; 
    int * p2 = &pooh;
    printf("pooh=%p\n",&pooh); 
    printf("%p\n",p1);
    printf("%p\n",p2);	//ֵ��Ϊpooh�ĵ�ַ
    printf("%d\n",*p1);
    printf("%d",p1==p2); //�Ƚϵ���������ֵ��Ҳ���Ƕ�Ϊpooh�ĵ�ַ
    return 0;
}
