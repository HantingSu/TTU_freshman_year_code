#include<stdio.h>
#include<string.h>

int length(char *ptr);
void cs_3(int a[],char *p[]);

int main(){
   // int count[3];  //為什麼不能在這邊宣告？會區段錯誤
    char str[100];
    char *strc;
    int count[3]={0,0,0};
   /* for(int i=0;1;i++){
    printf("%i|%5d|%5c|\n",i,str[0][i],str[0][i]);
    }*/
    printf("3_a:");
   // scanf("%s",&str[0]); //從第0格開始放
    gets(str);
    strc=str;       //pointer variable equals address of str
    printf("add of strc is %p\nadd of str  is %p\n",strc,&str);
    printf("(3_b):%d\n", length(strc)); //strc的位址裡面放的變數是str的地址，當我指向strc地址，可以得到此地址裡面的變數
    cs_3(count,&strc);
    printf("++++++++++++++++++++++++++++\n");
    printf("(3_c):\n");
    printf("Upper :%d\n",count[0]);
    printf("Lower :%d\n",count[1]); 
    printf("Number:%d\n",count[2]);
return 0;
}

int length(char *ptr){
    int i=0, a=0;
    for(i=0;ptr[i]!='\0';i++){
        a++;
    }
   // a=strlen(ptr);
    printf("++++++++++++++++++++++++++++\n");
    return a;
}

void cs_3(int count[],char *ptr[]){

   
    for(int i=0;ptr[0][i]!='\0';i++){
    if(ptr[0][i]>='A'&& ptr[0][i]<='Z')
        count[0]+=1;
    if(ptr[0][i]>='a'&& ptr[0][i]<='z')
        count[1]+=1;
    if(ptr[0][i]>='0'&& ptr[0][i]<='9')
        count[2]+=1;
    }
}

