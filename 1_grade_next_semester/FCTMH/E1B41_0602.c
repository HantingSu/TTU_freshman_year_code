#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct statistics{
    char name[20];
    char id[20];
    int math;
    int phy;
    int eng;
    float avg;
 };


struct statistics quetion_one();
void question_two(struct statistics *classmate, int people_count){
    if(people_count ==0){
    printf("尚未輸入學生人數(請按A)\n");
    }
    for(int i=0;i<people_count;i++){
    printf("學生:%s/學號:%s\t",classmate[i].name,classmate[i].id);
    printf("數學分數:%1d\t物理分數:%1d\t英文分數:%d\t平均:%.1f\n",classmate[i].math,classmate[i].phy,classmate[i].eng,classmate[i].avg);
    printf("========================================================================================\n");
    }
    
}

void question_three(struct statistics *classmate,int people_count){
   char check[20];
   int negative=0;
   if(people_count==0){
       printf("尚未輸入學生人數(請按A)\n");
       // system("paues");
       // system("cls");
       return;
   }
    printf("要找的人是:");
    scanf("%s",check);
    fflush(stdin);
    //printf("check is %s\nclassmate[i].name is %s\n",check,classmate[0].name);
    for(int i=0;i<people_count;i++){
            if(strcmp(classmate[i].name,check)==0)
            {
                printf("學生:%s/學號:%s\t",classmate[i].name,classmate[i].id);
                printf("數學分數:%1d\t物理分數:%1d\t英文分數:%d\t平均: %.1f\n",classmate[i].math,classmate[i].phy,classmate[i].eng,classmate[i].avg);
                negative++;
            }
        }
    if(negative==0){
        printf("沒這個人餒～\n");
       // system("paues");
       // system("cls");
    }
   // system("pause");
    //system("cls");
return ;
}

void question_four(struct statistics *classmate,int people_count){
    struct statistics itz[10];
   if(people_count==0){
       printf("尚未輸入學生人數(請按A)\n");
        //system("paues");
        //system("cls");
       return;
   }
    for(int i=0;i<people_count;i++){
    itz[i]=classmate[i];
    }
    puts("=======================\n");

for (int i = 0; i < people_count; ++i) {
    for (int j = 0; j < i; ++j) {
      if (classmate[j].avg < classmate[i].avg) {
        struct statistics buff = classmate[j];
        classmate[j] = classmate[i];
        classmate[i] = buff;
      }
    }
  }
for(int j=0;j<people_count;j++)
{
    printf("%s(%s) 平均:%3.1f\n",classmate[j].name,classmate[j].id,classmate[j].avg);
    printf("______________________________\n");
}

    for(int i=0;i<people_count;i++){
    classmate[i]=itz[i];
    }
}

int main(){
    
    int human_number=0,n=1;
    char cmd;
    char leave[1];
    struct statistics classmate[10];
    char password[5]="2022";          
    char enter_pwd[5];
    
 puts("    H  H  AA      H  H  AA              ");
 puts("    H  H A  A     H  H A  A");  
 puts("    HHHH AAAA     HHHH AAAA");  
 puts("    H  H A  A     H  H A  A");  
 puts("    H  H A  A ____H  H A  A");  
 puts("             ____");  
 puts("");
 puts("W     W  OOO  M   M  AA  N   N");  
 puts("W     W O   O MM MM A  A NN  N");  
 puts("W  W  W O   O M M M AAAA N N N");  
 puts(" W W W  O   O M   M A  A N  NN");  
 puts("  W W    OOO  M   M A  A N   N");  
 puts("");  
 puts(" CCC  OOO  FFFF FFFF EEEE EEEE");  
 puts("C    O   O F    F    E    E");  
 puts("C    O   O FFF  FFF  EEE  EEE");  
 puts("C    O   O F    F    E    E");  
 puts(" CCC  OOO  F    F    EEEE EEEE");  
do{                                 
 
          printf("輸入密碼:");    
          scanf("%s",enter_pwd);
          fflush(stdin);
          if(strcmp(password,enter_pwd)==0){             
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


puts("-------[成績系統]------");
puts("|   a. 輸入學生成績  |");
puts("|   b. 顯示學生成績  |");
puts("|   c. 搜尋學生成績  |");
puts("|   d. 成績排名      |");
puts("|   e. 系統結束      |");
puts("----------------------");
    scanf("%c",&cmd);
    system("cls");
    fflush(stdin);
    switch(cmd){
        case 'A':
        case 'a':
            printf("欲輸入學生人數(5~10):");
           while(scanf("%d",&human_number)!=1||human_number<5||human_number>10){
            if(human_number<5||human_number>10){
                printf("請輸入5~10人\n再次輸入:");
                fflush(stdin);
           }
           }
            for(int i=0;i<human_number;i++)
               classmate[i]=quetion_one();
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        case 'B':
        case 'b':
            fflush(stdin);
             question_two(classmate,human_number);
            system("pause");
            system("cls");
             break;
        case 'C':     
        case 'c':
             fflush(stdin);
             question_three(classmate,human_number);
             system("pause");
             system("cls");
             break;
        case 'D':
        case 'd':
             fflush(stdin);
             question_four(classmate,human_number);
            system("pause");
            system("cls");
            break;
        case 'E':
        case 'e':
             printf("是否要離開?(y/n)");
            // scanf("%c",&leave);
             while(1){
             fflush(stdin);
             scanf("%s",leave);
             fflush(stdin);
             if(strlen(leave)==1){
             if(leave[0]=='n'|| leave[0]=='N'){
                 break;
            system("cls");
             }else if(leave[0]=='y'|| leave[0]=='Y'){
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


struct statistics quetion_one()
{
    struct statistics classmate;
    int sum=0,dbc=0;
            sum=0;
            printf("學生:");
            scanf("%s",classmate.name);
            printf("學生學號:");
            scanf("%s",classmate.id);
            dbc=atoi(classmate.id);
            fflush(stdin);
            do{
            if(strlen(classmate.id)==6 && dbc!=0)
                break;
            else{
                printf("學號為六碼數字!\n再次輸入:");
                scanf("%s",classmate.id);
                dbc=atoi(classmate.id);
                fflush(stdin);
                }
            }while(strlen(classmate.id)!=6||dbc==0); 
            
            printf("數學分數為:");
            while(scanf("%d",&classmate.math)!=1 || classmate.math<0 || classmate.math>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("物理分數為:");
            while(scanf("%d",&classmate.phy)!=1 || classmate.phy <0 || classmate.phy>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("英文成績為:");
            while(scanf("%d",&classmate.eng)!=1 || classmate.eng <0 || classmate.eng>100){
                printf("請輸入0~100!\n再次輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = classmate.math+classmate.phy+classmate.eng;
            classmate.avg=(float)sum/3;
            printf("================================\n");
        
   
        return classmate;
}
