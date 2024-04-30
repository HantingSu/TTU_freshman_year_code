#include<stdio.h>

int main()
{
    int i=0,sum = 0,num =0;
    printf("Enter a number\n");
    scanf("%d", &num);
    while(sum < num)
    {
        sum += i;
        i++;
        
    }
    printf("要加%d次\n",i-1);
    return 0;
}
