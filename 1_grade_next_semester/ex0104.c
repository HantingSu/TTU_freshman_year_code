#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
 char name[3][9];      //3個學生的姓名
 int score[3][4];        //3個學生的4科成績
 int total[3]={0};      //3個學生的總成績
 int i,j;

 for (i=0;i<3;i++)    //3個學生
{
printf("輸入第%d個學生的姓名:",
                         i+1);
scanf("%s",name[i]);
for (j=0;j<4;j++)          //4科
           {                   
     printf("第%d科成績:",j+1);
     scanf("%d",&score[i][j]); 
     total[i]+= score[i][j]; //累計
 }
}
for (i=0;i<3;i++)    //3個學生
           printf("%s的總成績:%d\n",
                       name[i],total[i]);   
system("PAUSE");
for(int k=0;k<3;k++)
printf("name[%d] address is %p\n",k,&name[k]);  //print address of name[i]
return 0;
}
