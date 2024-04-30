#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ps[4]="192";
    char e[4];
    int m,a,b,mix,p,f;
    float sum=0.0;

    printf("Plaese Enter a Password of number:");
    scanf("%s",e);
    if(strcmp(e,ps)==0)
    {
        m = atoi(ps);
        printf("Hello Mr.%d\n",m-150);
        printf("Enter 5 score\n");
       fflush(stdin); 
        for(int i=1;i<=5;i++)
        {
            scanf("%d",&a);
            mix+=a;
            if(a>=60)
                p++;
            if(a<60)
                f++;
            if(a>b)
            {
                b=a;
            }
            sum=(float)mix/5;
        }
        printf("%d\n",b);
         printf("mix is %2.1f\n",sum);
        printf("%d score pass\n%d score fail\n",f,p);

    }
    else
    {
        printf("Wrong Password\n\a\a\a\a\a\a\a\a\a\a");
    }
    return 0;
}
