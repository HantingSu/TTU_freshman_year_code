#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct stc{
    char name[20];
    char id[20];
    int math;
    int phy;
    int eng;
    float avg;
 };



struct stc case_a()
{
    struct stc stud_nm;
    int sum=0,dbc=0;  //dbc=double check
            sum=0;
            printf("學生:");
            scanf("%s",stud_nm.name);
            printf("學生學號:");
            scanf("%s",stud_nm.id);
            dbc=atoi(stud_nm.id);
            fflush(stdin);
            do{
            if(strlen(stud_nm.id)==6 && dbc!=0)
                break;
            else{
                printf("學號為六碼數字!\n再次輸入:");
                scanf("%s",stud_nm.id);
                dbc=atoi(stud_nm.id);
                fflush(stdin);
                }
            }while(strlen(stud_nm.id)!=6||dbc==0); 
            
            printf("數學分數為:");
            while(scanf("%d",&stud_nm.math)!=1 || stud_nm.math<0 || stud_nm.math>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("物理分數為:");
            while(scanf("%d",&stud_nm.phy)!=1 || stud_nm.phy <0 || stud_nm.phy>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("英文成績為:");
            while(scanf("%d",&stud_nm.eng)!=1 || stud_nm.eng <0 || stud_nm.eng>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = stud_nm.math+stud_nm.phy+stud_nm.eng;
            stud_nm.avg=(float)sum/3;
            printf("================================\n");
        
   
        return stud_nm;
}
void case_b(struct stc *stud_nm,int people_count);
void case_c(struct stc *stud_nm,int people_count);
void case_d(struct stc *stud_nm,int people_count);
void personal();
void menu(){
puts("-------[成績系統]------");
puts("|   a. 輸入學生成績   |");
puts("|   b. 顯示學生成績   |");
puts("|   c. 搜尋學生成績   |");
puts("|   d. 成績排名       |");
puts("|   e. 系統結束       |");
puts("-----------------------");
};
int main(){
    
    int nos=0,n=1;
    char order;
    char csd_cmd[1];
    struct stc stud_nm[10];
    char password[5]="2022";          
    char entering_psd[5];
    
    personal();
do{                                 
 
          printf("輸入密碼:");    
          scanf("%s",entering_psd);
          fflush(stdin);
          if(strcmp(password,entering_psd)==0){             
              printf("您好！歡迎～\n"); 
              system("pause");
              break;
          }
              else if(n==3){              
              printf("已錯%d次！有緣再會\n",n);
                  return 0;
                  }
              else{
              printf("錯%d次\n",n);  
              n++;
              }
     }while(n<=3);
system("cls");
    while(1){

menu();
    scanf("%c",&order);
    system("cls");
    fflush(stdin);
    switch(order){
        case 'A':
        case 'a':
            printf("欲輸入學生人數(5~10):");
           while(scanf("%d",&nos)!=1||nos<5||nos>10){
            if(nos<5||nos>10){
                printf("請輸入5~10人\n再次輸入:");
                fflush(stdin);
           }
           }
            for(int i=0;i<nos;i++)
               stud_nm[i]=case_a();
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        case 'B':
        case 'b':
            fflush(stdin);
             case_b(stud_nm,nos);
            system("pause");
            system("cls");
             break;
        case 'C':     
        case 'c':
             fflush(stdin);
             case_c(stud_nm,nos);
             system("pause");
             system("cls");
             break;
        case 'D':
        case 'd':
             fflush(stdin);
             case_d(stud_nm,nos);
            system("pause");
            system("cls");
            break;
        case 'E':
        case 'e':
             printf("是否要離開?(y/n)");
             while(1){
             fflush(stdin);
             scanf("%s",csd_cmd);
             fflush(stdin);
             if(strlen(csd_cmd)==1){
             if(csd_cmd[0]=='n'|| csd_cmd[0]=='N'){
                 break;
            system("cls");
             }else if(csd_cmd[0]=='y'|| csd_cmd[0]=='Y'){
                 return 0;
             }
             else{
                 printf("錯誤指令!!!\n");
                 printf("再次輸入:");
                 }
              }else{
                  printf("錯誤指令\n再次輸入:");
              }
           }
             break;
        default:
             printf("錯誤指令\n再次輸入:");
         }
    }
}


void personal(){
puts("................ !Y~ .............................");
puts("................ 7#G: ............................");
puts("................ .G#! ............................");
puts("................ .G#!   ..........................");
puts("................ 7#G:!?^ .........................");
puts("............... ^BB~~#B^ .........................");  
puts("............... ?#5 Y#Y ..........................");  
puts("............... ?#5 Y#Y ..........................");  
puts("............    ^B#~~#B^             .............");  
puts("..........  .....!Y~.7Y^..............    ........");  
puts("......... :YPPGGGPPPGPPPGGGGGGGGGGGPGP7:::.  .....");  
puts("......... ~#B#BGGGGGGGGGGGGGGGGGGGGBB#BGGGPJ~  ...");  
puts("......... ~#B#J...................^BB#5::^7G#J. ..");  
puts("......... ~#B#J .               . ^BB#5    :G#! ..");  
puts("......... ~#BBJ ................. ^BB#Y    ^G#! ..");  
puts("......... ^BBB5  ................ !#B#5~~!JBB?....");  
puts(".......... Y#BB?  .............  ^GBBBPPPP57: ....");  
puts(".......... .5#B#Y^.            :7G##G~....   .....");
puts("........... .7G##BP?!^^^^^^^~7YG##BY^    .........");  
puts("............  :75B####BBBBB####BPJ^  .............");  
puts("........         .~7?JYYYYYYJ7~:          ........");  
puts("........7JJJJJJJJJ????JJJJJ????JJJJJJJJJJ^ .......");  
puts("........7JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ^ .......");  
puts("........                                  ........");
}

void case_b(struct stc *stud_nm, int people_count){
    if(people_count ==0){
    printf("尚未輸入學生人數(請按A)\n");
    return;
    }
    printf("========================================================================================\n");
    for(int i=0;i<people_count;i++){
    printf("學生:%s/學號:%s\t",stud_nm[i].name,stud_nm[i].id);
    printf("數學分數:%1d\t物理分數:%1d\t英文分數:%d\t平均:%.1f\n",stud_nm[i].math,stud_nm[i].phy,stud_nm[i].eng,stud_nm[i].avg);
    printf("========================================================================================\n");
    }
    
}

void case_c(struct stc *stud_nm,int people_count){
   char want[20];
   int zero=0;
   if(people_count==0){
       printf("尚未輸入學生人數(請按A)\n");
       return;
   }
    printf("要找的人是:");
    scanf("%s",want);
    fflush(stdin);
    for(int i=0;i<people_count;i++){
            if(strcmp(stud_nm[i].name,want)==0)
            {
                printf("學生:%s/學號:%s\t",stud_nm[i].name,stud_nm[i].id);
                printf("數學分數:%1d\n物理分數:%1d\n英文分數:%d\n平均: %.1f\n",stud_nm[i].math,stud_nm[i].phy,stud_nm[i].eng,stud_nm[i].avg);
                zero++;
            }
        }
    if(zero==0){
        printf("沒這個人餒～\n");
    }
return ;
}

void case_d(struct stc *stud_nm,int people_count){
    struct stc alpha[10];
   if(people_count==0){
       printf("尚未輸入學生人數(請按A)\n");
       return;
   }
    for(int i=0;i<people_count;i++){
    alpha[i]=stud_nm[i];
    }


for (int i = 0; i < people_count; ++i) {
    for (int j = 0; j < i; ++j) {
      if (stud_nm[j].avg < stud_nm[i].avg) {
        struct stc buff = stud_nm[j];
        stud_nm[j] = stud_nm[i];
        stud_nm[i] = buff;
      }
    }
  }
for(int j=0;j<people_count;j++)
{
    printf("%s(%s) 平均:%3.1f\n",stud_nm[j].name,stud_nm[j].id,stud_nm[j].avg);
    printf("______________________________\n");
}

    for(int i=0;i<people_count;i++){
    stud_nm[i]=alpha[i];
    }
}
