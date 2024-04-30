#include<stdio.h>


int main()
{
int w =80, num=42;
float m=1.68,bmi=0;
    printf("我是\"蘇翰庭\"\n");
    printf("我的座號是\'%d\'\n",num);
    printf("我的體重是%d公斤，我的身高是%2.2f公尺\n",w,m);
    bmi = (float)w/(m*m);
    printf("BMI為%2.2f\n",bmi);

    return 0;
}
