#include<stdio.h>

int main()
{
    int sum=0,n = 0;
    for(int i=0; i<=50; i++)
    {
        if(i>0 && i%5==0){
        sum +=i;
        printf("%d\n",i);
        n++;
        }
    }
    printf("%d\n",sum);
    printf("do the %d time\n", n);
    return 0;
}
