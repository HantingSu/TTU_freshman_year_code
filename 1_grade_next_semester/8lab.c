#include<stdio.h>
#include<stdlib.h>
#define T(X) (X)*(X)*(X)
#define W(X) (X)*(X)
#define size 3

double f(double x){
    double ans=0;
    ans= 3*T(x)+2*x-1;
    return ans;
}

int main()
{
    float num[]={3.2,(-2.1),0,2.1};
    for(int i=0;i<=size;i++)
    {
        printf("f(%2.1f)=%2.3f\n",num[i],f(num[i]));
    }
    return 0;
}
