#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sps[10];
    char ps[10];
    int count=0,low=0,high=0,num=0,suss=0;
    printf("Set password:");
    while(suss<1){
    scanf("%s",sps);
    for(int i=0;sps[i]!='\0';i++){
        if(sps[i]>='a'&&sps[i]<='z')
            low++;
        if(sps[i]>='A'&&sps[i]<='Z')
            high++;
        if(sps[i]>='0'&&sps[i]<='9'){
            num++;
        }
        count++;
    }
    if(count<=7&&low!=0&&high!=0&&num!=0){
        suss++;
        printf("ssi\n");
    }
    if(low==0){
    printf("Need one lower\n");
    }
    if(high==0){
    printf("need one higher\n");
    }
    if(num==0){
    printf("need one number\n");
    }
    if(count<=7&&low!=0&&high!=0&&num!=0){
    break;
    }else{
    printf("Enter again\n");
    }
    num=low=high=count=0;
    }

    scanf("%s",ps);
    if(strcmp(sps,ps)==0){
    printf("Setting suss!\n");
    }else{
        printf("設定失敗！\n");
    }
}
