#include<stdio.h>

int main()
{
int a=0,b=0;
char c[10];
float avg=0;
printf("WHO AM I?\nMy test score is?\n");
scanf("%s",c);
fflush(stdin);
scanf("%d %d", &a,&b);
avg = (a+b);    /*你也可以把這裡改成((float)a+(float)b)的方式*/
printf("I'am %s\n",c);
printf("I get %d and %d\n",a,b);
printf("My average score is %2.2f\n", avg/2);  /*只要在printf後面的地方對他做運算就不怕小數後面的東西跑不出來*/
return 0;
    
 }
