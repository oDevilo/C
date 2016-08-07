#include<stdio.h>
void mikado(int);
int main()
{
    int pooh=2;
    int * p1= &pooh; 
    int * p2 = &pooh;
    printf("pooh=%p\n",&pooh); 
    printf("%p\n",p1);
    printf("%p\n",p2);	//值都为pooh的地址
    printf("%d\n",*p1);
    printf("%d",p1==p2); //比较的是两个的值，也就是都为pooh的地址
    return 0;
}
