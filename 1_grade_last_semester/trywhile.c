#include<stdio.h>

int main()
{
    int i=0,n=0,sum=0;
    scanf("%d",&i);
    while(n<=i)
    {
        sum+=n;
        n+=2;
    }
    printf("%d\n",sum);
    return 0;
}
