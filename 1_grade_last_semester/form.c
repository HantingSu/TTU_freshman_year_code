#include<stdio.h>

int main(){
    
    int num=5,i=2147483640;
   float j=22.22;
       for(int i=0;i<10;i++){
    
        printf("%3d\n",num);
        num+=num;
    }
    printf("\n");

    while(i>0)
        printf("%d\n",i++);
        printf("%d\n",i);
   printf("%3.4f\n",j);

    return 0;
}
