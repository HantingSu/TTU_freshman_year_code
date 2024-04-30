#include<stdio.h>

int main()
{
int n ,i,sum=0;
    do 
    {
    printf("Enter a odd number(n>0)\n");
    scanf("%d", &n);
        if((n%2)==0 || n <=0){
        printf("PlEASE ENTER ODD NUMBER\nENTER AGAIN!!!\n");
        printf("ARE YOU FUCKING EDIOT???\n");
        }
    }
    while((n%2)==0 || n <=0);
    for(i=1; i<=n; i+=2)
    {
        sum+=i;
    }
    printf("1+3+...+%d=%d\n", n, sum);
    return 0;
}
