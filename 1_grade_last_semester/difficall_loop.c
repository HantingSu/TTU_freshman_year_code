#include<stdio.h>

int main()
{
    int n1=0,n2=0,sum=0, k=0;
    do{
    printf("Enter first number \"n1\",and let n1>10\n");
    scanf("%d",&n1);
    }while(n1<10);

    do{
    printf("Enter second number \"n2\",and let n2>n1\n");
    scanf("%d", &n2);
    }while(n2<n1);
    k = n2-n1;
    for(int i=0;i<=k;i++)
    {
        sum +=n1;
        n1++;
    }
    printf("sum is %d\n",sum);
    return 0;
}
