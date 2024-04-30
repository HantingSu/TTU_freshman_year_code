#include<stdio.h>

int main()
{
    int i=0,sum=0, n=0;
    float avg;
    printf("Enter a positive number\n");
    while(1)
    {
        scanf("%d",&i);
    if(i < 0)
    {
        break;
    }
    printf("%d\n",i);
    printf("Keep enter\n");
        sum += i;
        n++;
    }
    avg=(float)sum/n;
     printf("總共輸入了%d次\n", n);
     printf("平均是%2.2f\n", avg);
    return 0;
 }
