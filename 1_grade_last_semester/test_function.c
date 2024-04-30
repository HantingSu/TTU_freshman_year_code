#include<stdio.h>

int sqadd(int num1, int num2)
{
    int sum=0;
    sum =num1*num1+num2*num2;
    return sum;
}
int main()
{
    int a=0,b=0,c=0,d=0,ans=0;
    printf("Enter 4 numbers\n");
    scanf("%d %d %d %d",&a, &b, &c,&d);
    ans= sqadd(a,b)+ sqadd(c,d);
    printf("%d=%d^2+%d^2%d^2%d^2\n", ans,a,b,c,d);
    return 0;

}
