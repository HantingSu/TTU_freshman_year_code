#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
    char name[20];
    char id[20];
    int math;
    int phy;
    int eng;
    float avg;
 };


struct data pb_a()
{
    struct data student;
    int sum=0,std_id=0;
            printf("輸入學生姓名:");
            scanf("%s",student.name);
            printf("輸入學生學號:");
            scanf("%s",student.id);
            std_id=atoi(student.id);
            fflush(stdin);
            do{
            if(strlen(student.id)==6 && std_id!=0)
                break;
            else{
                printf("學號為六碼數字!\n重新輸入:");
                scanf("%s",student.id);
                std_id=atoi(student.id);
                fflush(stdin);
                }
            }while(strlen(student.id)!=6||std_id==0); 
            
            printf("數學成績(0~100):");
            while(scanf("%d",&student.math)!=1 || student.math<0 || student.math>100){
                printf("錯誤成績(0~100)\n重新輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("物理成績(0~100):");
            while(scanf("%d",&student.phy)!=1 || student.phy <0 || student.phy>100){
                printf("錯誤成績(0~100)\n重新輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("英文成績(0~100):");
            while(scanf("%d",&student.eng)!=1 || student.eng <0 || student.eng>100){
                printf("錯誤成績(0~100)!\n重新輸入:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = student.math+student.phy+student.eng;
            student.avg=(float)sum/3;
            printf("************************************************\n************************************************\n");
        
   
        return student;
}

void pb_b(struct data *student, int nop){
    if(nop ==0){
    printf("沒輸入學生資料我是要給你看什麼啦？（請先按Ａ）\n");
    }
    for(int i=0;i<nop;i++){
    printf("學生:%5s  學號:%s\n",student[i].name,student[i].id);
    printf("數學:%1d\n物理:%1d\n英文:%d\n總平均%.1f分\n",student[i].math,student[i].phy,student[i].eng,student[i].avg);
    printf("************************************************\n************************************************\n");
    }
    
}

void pb_c(struct data *student,int nop){
   char search_name[20];
   int non=0;
   if(nop==0){
       printf("沒輸入學生資料我是要給你看什麼啦？（請先按Ａ）\n");
       return;
   }
    printf("要搜尋的學生名字為:");
    scanf("%s",search_name);
    fflush(stdin);
    for(int i=0;i<nop;i++){
            if(strcmp(student[i].name,search_name)==0)
            {
                printf("學生:%s/學號:%s\n",student[i].name,student[i].id);
                printf("數學成績:%1d\n物理成績:%1d\n英文成績:%d\n總平均為%.1f分\n",student[i].math,student[i].phy,student[i].eng,student[i].avg);
                printf("______________________________________________________________________\n");
                non++;
            }
        }
    if(non==0){
        printf("沒有這個人呦～\n");
        printf("______________________________________________________________________\n");
    }
return ;
}

void pb_d(struct data *student,int nop){
    struct data start[10];
   if(nop==0){
       printf("沒輸入學生資料我是要給你看什麼啦？（請先按Ａ）\n");
       return;
   }
    for(int i=0;i<nop;i++){
    start[i]=student[i];
    }

for (int i = 0; i < nop; ++i) {
    for (int j = 0; j < i; ++j) {
      if (student[j].avg < student[i].avg) {
        struct data temporary = student[j];
        student[j] = student[i];
        student[i] = temporary;
      }
    }
  }
for(int j=0;j<nop;j++)
{
    printf("%s(%s)平均成績為%.1f\n",student[j].name,student[j].id,student[j].avg);
}

    for(int i=0;i<nop;i++){
    student[i]=start[i];
    }
}


void Patrick_Star();

int main(){
    
    int std_num=0,pw_count=1;
    char command;
    char quit[1];
    struct data student[10];
    char password[5]="2022";          
    char en_pass[5];
    
Patrick_Star();    

do{                                 //use do_while to set password and login
 
          printf("請輸入密碼:");          ////print enter password
          scanf("%s",en_pass);//enter password
          fflush(stdin);
          if(strcmp(password,en_pass)==0){               //if you set passwore = you enter passowrd
              printf("您好～我的主人～\n"); //print string and break this loop
              system("pause");
              break;
          }
              else if(pw_count==3){              //else if n=3,end the program directly
              printf("你是誰？變態！你不是我的寶貝！\n");
                  return 0;
                  }
              else{
              printf("錯%d次了呦！注意一點！\n",pw_count);  //print wrong which time
              pw_count++;
              }
     }while(pw_count<=3);
system("cls");
    while(1){

    
puts("-------[成績系統]------");
puts("|   a. 輸入學生成績  |");
puts("|   b. 顯示學生成績  |");
puts("|   c. 搜尋學生成績  |");
puts("|   d. 成績排名      |");
puts("|   e. 系統結束      |");
puts("----------------------");
    scanf("%c",&command);
    system("cls");
    fflush(stdin);
    switch(command){
        case 'A':
        case 'a':
            printf("輸入學生人數(5~10):");
           while(scanf("%d",&std_num)!=1||std_num<5||std_num>10){
            if(std_num<5||std_num>10){
                printf("就只能有5~10 人!!!不高興啊？\n重新輸入:");
                fflush(stdin);
           }
           }
            for(int i=0;i<std_num;i++)
               student[i]=pb_a();
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        case 'B':
        case 'b':
            fflush(stdin);
             pb_b(student,std_num);
            system("pause");
            system("cls");
             break;
        case 'C':     
        case 'c':
             fflush(stdin);
             pb_c(student,std_num);
             system("pause");
             system("cls");
             break;
        case 'D':
        case 'd':
             fflush(stdin);
             pb_d(student,std_num);
            system("pause");
            system("cls");
            break;
        case 'E':
        case 'e':
             printf("離開程式?(y/n)");
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
                 printf("我看不懂!!!是要怎麼處理你的需求？\n");
                 printf("重新輸入:");
                 }
              }else{
                  printf("太多了我會受不了～（請輸入「單一字元」）\n重新輸入:");
              }
           }
             break;
        default:
             printf("好好講話喔！！！\n我還是有底線的！\n請在輸入一次:");
         }
    }
}

void Patrick_Star(){
puts("────────────────────██████──────────"); 
puts("──────────────────██▓▓▓▓▓▓██────────");
puts("────────────────██▓▓▓▓????██────────");
puts("────────────────██▓▓??????██────────");
puts(" ──────────────██▓▓▓▓????██──────────");
puts("──────────────██▓▓??????██──────────");
puts("────────────██▓▓▓▓??????██──────────");
puts("────────────████??████??██──────────");
puts("────────────██▓▓????????██──────────");
puts("──────────██────??────??██──────────");
puts("──────────████──??██──??██──────────");
puts("──────────██────??────??██──────────");
puts("──────────██????????????██──────────");
puts("──────────████████████????██────────");
puts("────────██▓▓????????????????██──────");
puts("──────██▓▓▓▓??????????????▓▓??██────");
puts("────██▓▓▓▓????????????????▓▓????██──");
puts("──██▓▓▓▓▓▓??????????????????▓▓????██");
puts("██▓▓??▓▓????????????????????▓▓????██");
puts("██▓▓??▓▓??????▓▓▓▓??????????▓▓▓▓??██");
puts("██▓▓▓▓▓▓??????????????????????▓▓▓▓██");
puts("──████?▌▓▓?????????????????▌?▌████──");
puts("────██?▌?▌▌▌▌▌▌▌▌▌?▌?▌?▌?▌▌▌?▌██────");
puts("────██▌▌?▌?▌▌▌?▌▌▌▌▌?▌▌▌▌▌▌▌▌▌██────");
puts("──────██▌▌?▌?▌?▌?▌?▌?▌?▌▌▌▌▌██──────");
puts("──────██?▌?▌?▌████████?▌▌▌▌▌██──────");
puts("────────██??██────────██??██────────");
puts("────────██████────────██████────────");
	return ;
}





