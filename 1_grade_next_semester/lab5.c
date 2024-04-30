#include<stdio.h>

int main()
{
    int n=0;
    
    printf("請輸入月份:");
    scanf("%d",&n);
    if(n>=2&&n<=4)
        printf("春天\n");
    else if(n>=5&&n<=7)
        printf("夏天\n");
    else if(n>=8&&n<=10)
        printf("秋天\n");
    else if((n>=11&&n<=12)||n==1){
        printf("冬天\n");
    }
    else if(n==0)
        printf("冬天\n");
    else 
        printf("輸入錯誤\a\n");
    return 0;
}
