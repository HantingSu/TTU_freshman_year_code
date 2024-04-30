#include<stdio.h>

int main()
{
    int num=0, sum =0,n=0;
    float avg;
    printf("Enter five number\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &num);
        sum += num;
        n++;
    }
    avg = (float)sum/n;
    printf("總和為%d\n", sum);
    printf("平均為%2.2f\n", avg);
    return 0;
}
