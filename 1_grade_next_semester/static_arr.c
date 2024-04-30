#include<stdio.h>
#include<stdlib.h>

int  add10(int a,int b ){
   int c[2]; 
    a+=10;
    b+=10;
     c[0]=a;
     c[1]=b;
     return c;
 }

int main()
{
    int a=3,b=5;
    int recall[2];
    printf("before add10():");
    printf("%d %d\n",a,b);
    add10(a,b);
    printf("after add10():");
    printf("%d %d\n",recall[0],recall[1]);
    return 0;
}


