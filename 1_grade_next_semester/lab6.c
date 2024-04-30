#include<stdio.h>

int main()
{
    int a=0,sum=0,n=0,c=-99;
    float avg=0.0;

    do
    {
        scanf("%d",&a);
        if(a>=0&&a<=100){
        sum+=a;
        n++;
        }
        else{
        printf("Enter wrong score\a\n");
        printf("Please enter again\n");
        }
    }while(a!=-100);
    avg=(float)sum/(float)n;
    printf("Enter %d score\n",n);
    printf("Sum is %d\n",sum);
    printf("Avg is %2.2f\n",avg);
    return 0;
}
