#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char e;
    int r=0,p;
    printf("Enter char\n");
    scanf("%c",&e);
    r=e;  //row
    p=e;  //紀錄e為多少
 for(int i=0;i<=(r-97);i++)
    {
        p=i;
        for(int n=1;n<=(r-97)-i;n++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {  
             printf("%c",e-p);
            p--; 
            
                         
        }
        printf("\n");
    }

return 0;
}

/*
do{
    printf("%c",e);
    e--;
}while(e>=q);
*/

