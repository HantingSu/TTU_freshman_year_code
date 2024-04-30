#include<stdio.h>
#include<stdlib.h>

void add10(int* a,int* b ){
    
     *a+=10;
     *b+=10;
 }

int main()
{
    int a=3,b=5;
    printf("before add10():");
    printf("%d %d\n",a,b);
    add10(&a,&b);
    printf("after add10():");
    printf("%d %d\n",a,b);
    return 0;
}


