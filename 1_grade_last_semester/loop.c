#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int num=1,try=1;
    int ran;
    //void srand();
    for(int i=0;i<=10;++i){
    num+=num;
    ran = rand()%10;
    printf("%d ",ran);
    }
    printf("\n");

    for(int i=0;i<=10;i++){
    ran = rand()%10;
    printf("%d ",ran);
    }
    printf("\n");
    //printf("\nnum is %d\n",num);
    //printf("try is %d\n",try);
}
