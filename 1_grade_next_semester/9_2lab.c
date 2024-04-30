#include <stdio.h>
 #include <stdlib.h>
 #define SIZE 5

 int main(void)
{
 int i, min, score[SIZE];
 float sum=0;

puts("輸入5筆成績"); 
for (i=0;i<SIZE;i++)
    {
printf("score[%d]=", i);
fflush(stdin);
scanf("%d", &score[i]);
 }
min= score[0];
 sum= score[0];
 for (i=0;i<SIZE;i++) //改i=0;i<SIZE
 {
sum+= score[i];
if (min > score[i])   //'<'改成'>'
         min= score[i];
 }
printf("Average= %6.2f, Min=%5d\n", 
            sum/SIZE, min);
system("pause");
return 0;
 }
