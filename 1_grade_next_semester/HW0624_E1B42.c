#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//void qt_a(struct form std[],int peo);
//void qt_b(struct form);

 struct form{
    char name[20];
    char id[20];
    int math;
    int phy;
    int eng;
    float avg;
 };

void my_id();
void menu();
struct form qt_a();
void qt_b(struct form std[] ,int peo);
void qt_c(struct form std[],int num);
void qt_d(struct form std[],int num);

int main(){
    
    int num=0,n=1;
    char enter;
    char leave[1];
    struct form std[10];
    char ps[5]="2022";          
    char en[5];
    
    my_id();
do{                                 //use do_while to set password and login
 
          printf("Enter Psaaword:");          ////print enter password
          scanf("%s",en);//enter password
          fflush(stdin);
          if(strcmp(ps,en)==0){               //if you set passwore = you enter passowrd
              printf("WILLCOME TAIN_ZHI_DAO\n"); //print string and break this loop
              system("pause");
              break;
          }
              else if(n==3){              //else if n=3,end the program directly
              printf("Wrong %d Times!BYE~~~\n",n);
                  return 0;
                  }
              else{
              printf("Wrong %d Time\n",n);  //print wrong which time
              n++;
              }
     }while(n<=3);
system("cls");
    while(1){

    menu();
    scanf("%c",&enter);
    system("cls");
    fflush(stdin);
    switch(enter){
        case 'A':
        case 'a':
            printf("Enter student number(5~10):");
           while(scanf("%d",&num)!=1||num<5||num>10){
            if(num<5||num>10){
                printf("Please enter 5~10!!!\nEnter again:");
                fflush(stdin);
           }
           }
            for(int i=0;i<num;i++)
               std[i]=qt_a();
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        case 'B':
        case 'b':
            fflush(stdin);
             qt_b(std,num);
            system("pause");
            system("cls");
             break;
        case 'C':     
        case 'c':
             fflush(stdin);
             qt_c(std,num);
             system("pause");
             system("cls");
             break;
        case 'D':
        case 'd':
             fflush(stdin);
             qt_d(std,num);
            system("pause");
            system("cls");
            break;
        case 'E':
        case 'e':
             printf("Are you sure you want to leave?(y/n)");
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
                 printf("SORRY! I DON'T KNOW WHAT ARE YOU SAY!!!\n");
                 printf("Please enter again:");
                 }
              }else{
                  printf("Please enter single character!\nPlease enter again:");
              }
           }
             break;
        default:
             printf("WTF???\nWhat do you want to do?\nEnter again:");
         }
    }
    return 0;
}


struct form qt_a()
{
    struct form std;
    int sum=0,iid=0;
       // for(int i=0;i<num;i++){
            sum=0;
            printf("Enter Name:");
            scanf("%s",std.name);
            printf("Enter ID:");
            scanf("%s",std.id);
            iid=atoi(std.id);
            fflush(stdin);
            do{
            if(strlen(std.id)==6 && iid!=0)
                break;
            else{
                printf("Wrong ID!\nPlease enter ID again:");
                scanf("%s",std.id);
                iid=atoi(std.id);
                fflush(stdin);
                }
            }while(strlen(std.id)!=6||iid==0); 
            
            printf("Enter math score:");
            while(scanf("%d",&std.math)!=1 || std.math<0 || std.math>100){
                printf("Wrong Score!\nPlease enter again:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("Enter physic score:");
            while(scanf("%d",&std.phy)!=1 || std.phy <0 || std.phy>100){
                printf("Wrong Score!\nPlease enter again:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("Enter English score:");
            while(scanf("%d",&std.eng)!=1 || std.eng <0 || std.eng>100){
                printf("Wrong Score!\nPlease enter again:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = std.math+std.phy+std.eng;
            std.avg=(float)sum/3;
            printf("================================\n");
        
   
        return std;
}

void qt_b(struct form *std, int num){
    if(num ==0){
    printf("Please enter student grades first(Pause A)\n");
    }
    for(int i=0;i<num;i++){
    printf("Student:%s/ID:%s\n",std[i].name,std[i].id);
    printf("Math score:%1d\nPhysic score:%1d\nEnglish score:%d\nAverage is %.1f\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
    printf("===========================================\n");
    }
    
}

void qt_c(struct form *std,int num){
   char search[20];
   int alive=0;
   if(num==0){
       printf("Please enter student grades first(Pause A)\n");
       // system("paues");
       // system("cls");
       return;
   }
    printf("Please enter the name of the student you want to search:");
    scanf("%s",search);
    fflush(stdin);
    //printf("search is %s\nstd[i].name is %s\n",search,std[0].name);
    for(int i=0;i<num;i++){
            if(strcmp(std[i].name,search)==0)
            {
                printf("Student:%s/ID:%s\n",std[i].name,std[i].id);
                printf("Math score:%1d\nPhysic score:%1d\nEnglish score:%d\nAverage is %.1f\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
                alive++;
            }
        }
    if(alive==0){
        printf("Cheak no such person\n");
       // system("paues");
       // system("cls");
    }
   // system("pause");
    //system("cls");
return ;
}

void qt_d(struct form *std,int num){
    float compare[10];
    struct form origin[10];
   if(num==0){
       printf("Please enter student grades first(Pause A)\n");
        //system("paues");
        //system("cls");
       return;
   }
    for(int i=0;i<num;i++){
    origin[i]=std[i];
    }
    puts("=======================\n");

for (int i = 0; i < num; ++i) {
    for (int j = 0; j < i; ++j) {
      if (std[j].avg < std[i].avg) {
        struct form buff = std[j];
        std[j] = std[i];
        std[i] = buff;
      }
    }
  }
for(int j=0;j<num;j++)
{
    printf("%s(%s) avg is %.1f\n\n",std[j].name,std[j].id,std[j].avg);
}

    for(int i=0;i<num;i++){
    std[i]=origin[i];
    }
}

void menu(){
puts("-------[成績系統]------");
puts("|   a. 輸入學生成績  |");
puts("|   b. 顯示學生成績  |");
puts("|   c. 搜尋學生成績  |");
puts("|   d. 成績排名      |");
puts("|   e. 系統結束      |");
puts("----------------------");
}

void my_id()
{
puts("TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO   ");
puts("  TT   A  A  I  NN  N        Z  H  H  I      D  D A  A O   O"); 
puts("  TT   AAAA  I  N N N       Z   HHHH  I      D  D AAAA O   O"); 
puts("  TT   A  A  I  N  NN      Z    H  H  I      D  D A  A O   O"); 
puts("  TT   A  A III N   N ____ZZZZZ H  H III ____DDD  A  A  OOO"); 
puts("                      ____               ____"); 
puts(""); 
puts("      H  H  OOO  M   M EEEE W     W  OOO  RRRR                      "); 
puts("      H  H O   O MM MM E    W     W O   O R   R                     "); 
puts("      HHHH O   O M M M EEE  W  W  W O   O RRRR                      "); 
puts("      H  H O   O M   M E     W W W  O   O R R                       "); 
puts("      H  H  OOO  M   M EEEE   W W    OOO  R  RR                     "); 
puts(""); 
puts("           000      6           000        22                                    "); 
puts("          0  00    6           0  00      2  2                                  "); 
puts("          0 0 0    6666        0 0 0        2                                   "); 
puts("          00  0    6   6       00  0      2                                    "); 
puts("           000      666    ____ 000       2222                               "); 
puts("                           ____                                             "); 




}
