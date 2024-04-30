#include<stdio.h>

int main(){
    int v=10;
    int *p=&v,**pp = &p;

    printf("&v is %p\n",&v);
    printf("&p is %p\n",&p);
    printf("&pp is %p\n",&pp);
    printf("++++++++++++++++\n");
    printf("*&v is %d\n",*&v);
    printf("p is %p\n", p);
    printf("&p is %p\n",&p);
    printf("*p is %d\n",*p);
    printf("*&p is %p",*&p);\
    printf("**&p is %d\n",**&p);
    printf("&*p is %p\n",&*p);
    printf("*&*p is %d\n",*&*p);
    printf("pp is %p\n",pp);
    printf("**pp is %d\n",**pp);
    printf("&pp is %p\n",&pp);
    printf("*&pp is %p\n",*&pp);
    printf("&*pp is %p\n",&*pp);
    printf("*&*pp is %p\n",*&*pp);
    printf("**&pp is %p\n",**&pp);
    printf("***&pp is %d\n",***&pp);
return 0;
}
