#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
void line();
struct man
{
    char ID[12];        // 身分證
    char name[9];   // 姓名
    int age;             // 年齡
    char tel[11];// 電話
     };

int main(){
int old=0,his=0,sml=0;
float avg;
struct man employee[MAX]={{"1050203","林小明",25,"0911222333"},
                        {"1050205","林中明",27,"0922433444"},
                        {"1050203","林大明",30,"0922343444"},
                        {"1052002","王電機",50,"0988767535"},
                        {"1052001","吳資工",45,"0976646351"}
};

printf("Question A\n");
for(int i=0;i<MAX;i++){
printf("ID:%s/Name:%s    Age:%d      Tel_number:%s  \n\n",employee[i].ID,employee[i].name,employee[i].age,employee[i].tel);
}
line();
printf("Question B\n");
for(int i=0;i<MAX;i++){
if(old<employee[i].age){
    old=employee[i].age;
    his=i;
}
}
printf("ID:%s/Name:%s    Age:%d      Tel_number:%s\n\n",employee[his].ID,employee[his].name,employee[his].age,employee[his].tel);
line();
int s=0;
printf("Question C\n");
printf("Enter a number(for age):");
scanf("%d",&sml);
for(int i=0;i<MAX;i++){
    if(employee[i].age<sml){
     printf("ID:%s/Name:%s    Age:%d      Tel_number:%s \n\n",employee[i].ID,employee[i].name,employee[i].age,employee[i].tel);
        s++;
    }
}
    if(s==0){
        printf("Every empolyee age > %d\n",sml);
    }

line();
printf("Question D\n");
avg=((float)employee[0].age+(float)employee[1].age+(float)employee[2].age+(float)employee[3].age+(float)employee[4].age)/5;
printf("Average age is %2.2f\n",avg);
line();
printf("Question E\n");
printf("Enter employee[0] imformation\nID:");
scanf("%s",employee[0].ID);
printf("Name:");
scanf("%s",employee[0].name);
printf("Age:");
scanf("%d",&employee[0].age);
printf("Tel_num:");
scanf("%s",employee[0].tel);
line();
printf("ID:%s/Name:%s    Age:%d      Tel_number:%s  \n\n",employee[0].ID,employee[0].name,employee[0].age,employee[0].tel);
///////////////////////////////////////
/*
for(int i=0;i<MAX;i++){
if(old<employee[i].age){
    old=employee[i].age;
    his=i;
}
}
printf("ID:%s/Name:%s    Age:%d      Tel_number:%s    %dKG\n\n",employee[his].ID,employee[his].name,employee[his].age,employee[his].tel,employee[his].kg);
*/
return 0;
    }


void line(){
puts("_______________________________________________");
}

