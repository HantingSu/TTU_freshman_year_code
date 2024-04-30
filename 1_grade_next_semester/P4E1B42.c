/*這次程式作業跟上次比真的不難，不過比較特別的是這次有硬性規定要用副函式包好case a~d
 *因為副函式要回傳struct，所以那裡有一點小梗，不然其他的都很簡單！
 *還好這次是最後一次的作業，因為每次其實不是說男，就是中間多少會有些梗要想
 *但重點是每次都要打好多字跟著解，是真的累！其實只要有好好的解題，作業真的都偏簡單
 *跟其他科目相比，程設真的是我比較有興趣的科目
 */ 
#include<stdio.h>   //include library stdio.h
#include<string.h>  //include library string.h
#include<stdlib.h>  //include library stdlib.h


 struct form{       //declares form to be a data type of struct 
    char name[20];  //declares element of name to be a char data type
    char id[20];    //declares element of id to be a char data type
    int math;       //declares element of math to be int data type
    int phy;        //declares element of phy to be int data type
    int eng;        //declares element of eng to be int data type
    float avg;      //declares element of avg to be float data type
 };

void my_id();       //declares procedure "my_id" to be a void data type,This is print my personal icon
void menu();        //declares procedure "menu" to be a void data type,This is print menu
struct form qt_a(); //declares procudure "qt_a" to be a struct form data type,This is process entering data in struct std[i](case a)
void qt_b(struct form std[] ,int peo);  //declare procuder "qt_b" to be a void data type,This is process case b
void qt_c(struct form std[],int num);   //declare procuder "qt_c" to be a void data type,This is process case c
void qt_d(struct form std[],int num);   //declare procuder "qt_d" to be a void data type,This is process case d

int main(){         //main function
    
    int num=0,n=1;          //declares num,n to be int data type
    char enter;             //declares enter to be char data type
    char leave[1];          //declares array leave to be a char data type
    struct form std[10];    //declares array std to be a struct form data type
    char ps[5]="2022";      //declares password is 2022
    char en[5];             //declares array en to enter and compare password
    
    my_id();                //call function my_id
do{                                 //use do_while to set password and login
 
          printf("Enter Password:");          ////print enter password
          scanf("%s",en);//enter password
          fflush(stdin);
          if(strcmp(ps,en)==0){               //if you set passwore = you enter passowrd
              printf("WILLCOME TAIN_ZHI_DAO\n"); //print string and break this loop
              system("pause");
              break;
          }
              else if(n==3){              //else if n=3,end the program directly
              printf("Wrong %d Times!BYE~~~\n",n);
                  return 0;                 //end all program
                  }
              else{
              printf("Wrong %d Time\n",n);  //print wrong which time
              n++;
              }
     }while(n<=3);
    system("cls");  //clean up screen
    while(1){       

    menu();                 //call function menu()
    scanf("%c",&enter);     //enter command that what you want to do
    system("cls");          //clean up screen
    fflush(stdin);          //clean up buffer
    switch(enter){          //command switch
        case 'A':
        case 'a':           //case a,A
            printf("Enter student number(5~10):");  //print this
           while(scanf("%d",&num)!=1||num<5||num>10){   //enter number of student and judgment is it<5 or >10
            if(num<5||num>10){  //if num<5 or >10
                printf("Please enter 5~10!!!\nEnter again:");   //print this
                fflush(stdin);          //clean up buffer
           }
           }
            for(int i=0;i<num;i++)      //use for loop to input std[i] 
               std[i]=qt_a();
            fflush(stdin);              //clean up buffer
            system("pause");            //click to continue
            system("cls");              //clean up screen
            break;                      //jump out of the loop
        case 'B':                       //case b,B
        case 'b':
            fflush(stdin);              //clean up buffer
            qt_b(std,num);              //call function qt_b
            system("pause");            //click to continue
            system("cls");              //clean up screen
             break;                     //jump out of the loop
        case 'C':     
        case 'c':                       //case c,C
             fflush(stdin);             //clean up buffer
             qt_c(std,num);             //call function qt_c
             system("pause");           //click to continue
             system("cls");             //clean up screen
             break;                     //jump out of the loop
        case 'D':
        case 'd':                       //case d,D
             fflush(stdin);             //clean up buffer
             qt_d(std,num);             //call function qt_d
            system("pause");            //click to continue
            system("cls");              //clean up screen
            break;                      //jump out of the loop
        case 'E':
        case 'e':                       //case e,E
             printf("Are you sure you want to leave?(y/n)");    //print
             while(1){  
             fflush(stdin);             //clean up buffer
             scanf("%s",leave);         //scan leave
             fflush(stdin);             //clean up buffer
             if(strlen(leave)==1){      //if leave string lenth=1
             if(leave[0]=='n'|| leave[0]=='N'){     //if leave = n or N
                system("pause");        //click to continue
                system("cls");          //clean up screen
                 break;                 //jump out of the loop
             }else if(leave[0]=='y'|| leave[0]=='Y'){  //if leave = y or Y
                 return 0;              //end all program
             }
             else{                      
                 printf("SORRY! I DON'T KNOW WHAT ARE YOU SAY!!!\n");   //if enter character is not n/N or y/Y print this
                 printf("Please enter again:");                         //printf
                 }
              }else{
                  printf("Please enter single character!\nPlease enter again:");    //if enter string print this
              }
           }
             break;                     //jump out of the loop
        default:                        //default print those  
             printf("WTF???\nWhat do you want to do?\nEnter again:");   //printf this
         }
    } 
}


struct form qt_a()
{
    struct form std;    //declares std to be struct form data type
    int sum=0,iid=0;    //iid is integer_id,this function is double chack id equal 6 or not and judement is all number or not
            printf("Enter Name:");  //print this
            scanf("%s",std.name);   //enter name
            printf("Enter ID:");    //print this
            scanf("%s",std.id);     //enter id
            iid=atoi(std.id);       //transform iid to integer
            fflush(stdin);          //clean up buffer
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
            
            printf("Enter math score:");        //print this
            while(scanf("%d",&std.math)!=1 || std.math<0 || std.math>100){  //enter math score and judemant score whether score <0 or >100
                printf("Wrong Score!\nPlease enter again:");
                fflush(stdin);
            }
            fflush(stdin);
            printf("Enter physic score:");                                  //print this
            while(scanf("%d",&std.phy)!=1 || std.phy <0 || std.phy>100){    //enter physic score and judemant score whether score <0 or >100       
                printf("Wrong Score!\nPlease enter again:");                
                fflush(stdin);
            }
            fflush(stdin);
            printf("Enter English score:");                                 //print this
            while(scanf("%d",&std.eng)!=1 || std.eng <0 || std.eng>100){    //enter english score and judemant score whether score <0 or >100       
                printf("Wrong Score!\nPlease enter again:");
                fflush(stdin);
            }
            fflush(stdin);
            sum = std.math+std.phy+std.eng;     //math+physic+english score
            std.avg=(float)sum/3;               //let std.avg to de a sum/3
            printf("================================\n");   //print this
        
   
        return std;    // return std struct
}

void qt_b(struct form *std, int num){
    if(num ==0){                                            //if number of people is 0
    printf("Please enter student grades first(Pause A)\n"); //print this
    return;                                                 //go back to main function
    }
    printf("===========================================\n");    //print this
    for(int i=0;i<num;i++){                                     //for loop to print struct std elemant
    printf("Student:%-5s/ID:%s\n",std[i].name,std[i].id);
    printf("Math score:%-3d\nPhysic score:%-3d\nEnglish score:%-3d\nAverage is %-3.1f\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
    if(i<(num-1))
    printf("____________________________________________\n");   
    }
    printf("============================================\n");
    
}

void qt_c(struct form *std,int num){
   char search[20];         //declares array search to put into you want to search the name of people
   int alive=0;             //count frequency
   if(num==0){              //if number of people is 0
       printf("Please enter student grades first(Pause A)\n");  //print this
       return;                                                  //go back to main function
   }
    printf("Please enter the name of the student you want to search:");     //print this
    scanf("%s",search);                                                     //enter the name you want to search
    fflush(stdin);
    for(int i=0;i<num;i++){                                                 //use for loop to search name of people
            if(strcmp(std[i].name,search)==0)                               //if entering name == std[i].name
            {
                printf("Student:%-5s/ID:%s\t",std[i].name,std[i].id);           //print those
                printf("Math score:%-3d\nPhysic score:%-3d\nEnglish score:%-3d\nAverage is %-3.1f\n",std[i].math,std[i].phy,std[i].eng,std[i].avg);
                alive++;                                                        //alive+1
            }
        }
    if(alive==0){                           //if alive =0
        printf("Cheak no such person\n");  //print this
    }
return ; //go back to main function
}

void qt_d(struct form *std,int num){
    struct form origin[10];         //declares array origin to be a struct form data type
   if(num==0){                      //if number of people is 0
       printf("Please enter student grades first(Pause A)\n");  //print this
       return;                                                  //go back to main function
   }
    for(int i=0;i<num;i++){             //use for loop to record array std
    origin[i]=std[i];
    }
    puts("=================================================");  //print this

for (int i = 0; i < num; ++i) {                                 //use bubble sort arrangment score 
    for (int j = 0; j < i; ++j) {
      if (std[j].avg < std[i].avg) {
        struct form buff = std[j];
        std[j] = std[i];
        std[i] = buff;
      }
    }
  }
for(int j=0;j<num;j++)   //use loop print those
{
    printf("Student:%-5s(%s)  avg is %-3.1f\n",std[j].name,std[j].id,std[j].avg);

}
puts("=================================================");
    for(int i=0;i<num;i++){     //reduction array std
    std[i]=origin[i];
    }
}

void menu(){            //print menu
puts("-------[成績系統]------");
puts("|   a. 輸入學生成績   |");
puts("|   b. 顯示學生成績   |");
puts("|   c. 搜尋學生成績   |");
puts("|   d. 成績排名       |");
puts("|   e. 系統結束       |");
puts("-----------------------");
}

void my_id()   //print personal icon
{
puts("TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO   ");
puts("  TT   A  A  I  NN  N        Z  H  H  I      D  D A  A O   O"); 
puts("  TT   AAAA  I  N N N       Z   HHHH  I      D  D AAAA O   O"); 
puts("  TT   A  A  I  N  NN      Z    H  H  I      D  D A  A O   O"); 
puts("  TT   A  A III N   N ____ZZZZZ H  H III ____DDD  A  A  OOO"); 
puts("                     ____               ____"); 
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
puts("                          ____                                             "); 

}
