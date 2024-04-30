#include<stdio.h>

int main()
{
    int n=0;
    float x=0,sum=0;
    scanf("%d",&n);
    for(float i=1;i<=n;i++)
    {
        printf("%2.1f\n",i);
        x=(1/i);
        sum=sum+x;
    }
    printf("%d is n\n",n);
    printf("Ans is %2.5f\n",sum);
    return 0;
}
