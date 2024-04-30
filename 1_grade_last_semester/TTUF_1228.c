#include<stdio.h>

int main()
{
    int i,r,c;
    char ch = 113;
    
    while(0){
        do
        {
            printf("Input an integer:");
            scanf("%d",&i);
        }
        while (i<=0);
    printf("The reverse is ");
    while(i!=0)
    {
        r = i%10;
        i/=10;
        printf("%d",r);
    }
    printf("\n\n");
}
    return 0;
}
