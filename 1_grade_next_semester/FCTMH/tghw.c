#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 struct imformation{
    char name[20];
    char id[20];
    int math;
    int phy;
    int eng;
    float avg;
 };


void menu(){
puts("-------[成績系統]------");
puts("|   a. 輸入學生成績  |");
puts("|   b. 顯示學生成績  |");
puts("|   c. 搜尋學生成績  |");
puts("|   d. 成績排名      |");
puts("|   e. 系統結束      |");
puts("----------------------");
}


struct imformation problem_a()
{
    struct imformation std;
    int sum=0,int_id=0;
            printf("輸入姓名:");
            scanf("%s",std.name);
            printf("輸入學號:");
            scanf("%s",std.id);
            int_id=atoi(std.id);
            fflush(stdin);
            do{
            if(strlen(std.id)==6 && int_id!=0)
                break;
            else{
                printf("學號格式錯誤!\n請在輸入一次:");
                scanf("%s",std.id);
                int_id=atoi(std.id);
                fflush(stdin);
                }
            }while(strlen(std.id)!=6||int_id==0); 
            
            printf("輸入數學成績:");
            while(scanf("%d",&std.math)!=1 || std.math<0 || std.math>100){
                printf("錯誤成績輸入\n請在輸入一次:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("輸入物理成績:");
            while(scanf("%d",&std.phy)!=1 || std.phy <0 || std.phy>100){
                printf("錯誤成績輸入!\n請在輸入一次:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("輸入英文成績:");
            while(scanf("%d",&std.eng)!=1 || std.eng <0 || std.eng>100){
                printf("錯誤成績輸入!\n請在輸入一次:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = std.math+std.phy+std.eng;
            std.avg=(float)sum/3;
            printf("________________________________________________\n");
        
   
        return std;
}
void problem_b(struct imformation human[] ,int a);
void problem_c(struct imformation human[],int a);
void problem_d(struct imformation human[],int a);

int main(){
    
    int nop=0,ps_n=1;
    char enter;
    char quit[1];
    struct imformation std[10];
    char password[5]="2022";          
    char pw_enter[5];
    
    
puts(" SSS  PPPP  Y   Y        FFFF  AA  M   M III L    Y   Y ");
puts("S     P   P  Y Y   X X   F    A  A MM MM  I  L     Y Y"); 
puts(" SSS  PPPP    Y     X    FFF  AAAA M M M  I  L      Y"); 
puts("    S P       Y    X X   F    A  A M   M  I  L      Y"); 
puts("SSSS  P       Y          F    A  A M   M III LLLL   Y"); 
puts("");
puts("		 AA  N   N Y   Y  AA						"); 
puts("		A  A NN  N  Y Y  A  A						"); 
puts("		AAAA N N N   Y   AAAA						"); 
puts("		A  A N  NN   Y   A  A						"); 
puts("		A  A N   N   Y   A  A						"); 
puts(""); 
puts("	 SSS   OOO       CCC U   U TTTTTT EEEE			"); 
puts("	S     O   O     C    U   U   TT   E				"); 
puts("	 SSS  O   O     C    U   U   TT   EEE			"); 
puts("	   S  O   O     C    U   U   TT   E				"); 
puts("	SSSS   OOO  ____ CCC  UUU    TT   EEEE			"); 
puts("			    ____								"); 

do{                                 //use do_while to set password and login
 
          printf("請輸入密碼:");          ////print enter password
          scanf("%s",pw_enter);//enter password
          fflush(stdin);
          if(strcmp(password,pw_enter)==0){               //if you set passwore = you enter passowrd
              printf("歡迎回來～庭駿超人！我的英雄\n"); //print string and break this loop
              system("pause");
              break;
          }
              else if(ps_n==3){              //else if n=3,end the program directly
              printf("錯%d次!\n滾啦！陌生人！\n",ps_n);
                  return 0;
                  }
              else{
              printf("錯%d次\n",ps_n);  //print wrong which time
              ps_n++;
              }
     }while(ps_n<=3);
system("cls");
    while(1){

    menu();
    scanf("%c",&enter);
    system("cls");
    fflush(stdin);
    switch(enter){
        case 'A':
        case 'a':
            printf("輸入學生人數(5~10):");
           while(scanf("%d",&nop)!=1||nop<5||nop>10){
            if(nop<5||nop>10){
                printf("學生人數就5~10人!!!\n重新輸入:");
                fflush(stdin);
           }
           }
            for(int i=0;i<nop;i++)
               std[i]=problem_a();
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        case 'B':
        case 'b':
            fflush(stdin);
             problem_b(std,nop);
            system("pause");
            system("cls");
             break;
        case 'C':     
        case 'c':
             fflush(stdin);
             problem_c(std,nop);
             system("pause");
             system("cls");
             break;
        case 'D':
        case 'd':
             fflush(stdin);
             problem_d(std,nop);
            system("pause");
            system("cls");
            break;
        case 'E':
        case 'e':
             printf("要離開我了嗎?(y/n)");
             while(1){
             fflush(stdin);
             scanf("%s",quit);
             fflush(stdin);
             if(strlen(quit)==1){
             if(quit[0]=='n'|| quit[0]=='N'){
                 break;
            system("cls");
             }else if(quit[0]=='y'|| quit[0]=='Y'){
                 return 0;
             }
             else{
                 printf("對不起看不懂你在說什麼!!!\n");
                 printf("請在輸入一次:");
                 }
              }else{
                  printf("請輸入「單一字元」!\nPlease enter again:");
              }
           }
             break;
        default:
             printf("供三小???\n你想做什麼?\n請在輸入一次:");
         }
    }
    return 0;
}



void problem_b(struct imformation *std, int nop){
    if(nop ==0){
    printf("請先輸入學生成績（請選Ａ）\n");
    }
    for(int i=0;i<nop;i++){
    printf("學生:%s/學號:%s\n",std[i].name,std[i].id);
    printf("數學成績:%1d\n物理成績:%1d\n英文成績:%d\n總平均%.1f分\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
    printf("_______________________________________________________________________\n");
    }
    
}

void problem_c(struct imformation *std,int nop){
   char find_name[20];
   int exist=0;
   if(nop==0){
       printf("請先輸入學生成績（請選Ａ）\n");
       return;
   }
    printf("請輸入你想要找的學生姓名:");
    scanf("%s",find_name);
    fflush(stdin);
    for(int i=0;i<nop;i++){
            if(strcmp(std[i].name,find_name)==0)
            {
                printf("學生:%s/學號:%s\n",std[i].name,std[i].id);
                printf("書學成績:%1d\n物理成績:%1d\n英文成績:%d\n總平均為%.1f分\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
                exist++;
            }
        }
    if(exist==0){
        printf("查無此人\n");
    }
return ;
}

void problem_d(struct imformation *std,int nop){
    struct imformation initial[10];
   if(nop==0){
       printf("請先輸入學生成績（請選Ａ）\n");
       return;
   }
    for(int i=0;i<nop;i++){
    initial[i]=std[i];
    }

for (int i = 0; i < nop; ++i) {
    for (int j = 0; j < i; ++j) {
      if (std[j].avg < std[i].avg) {
        struct imformation memory = std[j];
        std[j] = std[i];
        std[i] = memory;
      }
    }
  }
for(int j=0;j<nop;j++)
{
    printf("%s(%s)平均成績為%.1f\n",std[j].name,std[j].id,std[j].avg);
}

    for(int i=0;i<nop;i++){
    std[i]=initial[i];
    }
}

