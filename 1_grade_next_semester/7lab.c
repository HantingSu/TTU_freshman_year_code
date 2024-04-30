#include<stdio.h>
#include<string.h>

int main(){
    
    char ps[]="2022";
    char ep[5]={0};
    int t=1,n=0,n2=0,n3=0,n5=0,n7=0,wh=0;
    do{
        printf("Plaese Enter Password:");
        scanf("%s",ep);
        if(strcmp(ep,ps)==0){
        break;
        }
        printf("輸入錯誤\n\a");
        t++;
    }while(t<=3);
    if(t>3){
    return 0;
    }
    
    while(wh==0){ 
    printf("Please enter a number\n");
    scanf("%d",&n);
    if(n>0){
        if(n%2==0) n2++;
        if(n%3==0) n3++;
        if(n%5==0) n5++;
        if(n%7==0) n7++;
        
        wh=0;
    }
    else{
    wh=1;
    }
    }
    printf("Multiples of two have %d\n",n2);
    printf("Multiples of whree have %d\n",n3);
    printf("Multiples of five have %d\n",n5);
    printf("Multiples of seven have %d\n",n7);

    return 0;
}
