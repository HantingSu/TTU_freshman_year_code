#include<stdio.h>

int  sqadd(int a,int b)   /*你有幾個變數，就要宣告幾個數*/
{
    int ans;
    ans = a*a+b+1000;   
    return ans;
}

int main()
{
    int a =0,b=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("%d=%d^2+%d+1000\n", sqadd(a,b),a,b);

    return 0;

}
