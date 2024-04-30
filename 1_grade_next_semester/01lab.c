#include<stdio.h>
#include<string.h>

void count_b(int c[][5],char a[][20]);
void lower(char a[][20]);

int main(){
    char ps[5]="2022";
    char en[5];
    int a=0,e=0,I=0,o=0,u=0,n=0;
    char qt_b[3][20];
    int count[3][5]={0};
/* do{                                             
          printf("請輸入密碼:");      
          scanf("%s",en);     
          if(strcmp(ps,en)==0){       
          break;      
          }else{           
              printf("錯%d次!\n",n+1);
              n++;
          }
           if(n==3){      
              printf("錯%d次!再見~~~\n",n);
                  return 0;
                  }
              
                  
      }while(n<=3);
 */
    for(int i=0;i<3;i++){
        fflush(stdin);
        printf("Enter:");
        scanf("%s",qt_b[i]);
    }
    
         count_b(count,qt_b);
        printf("+++++++++++++++++++++++++++++++\n"); 
         lower(qt_b);
    return 0;
}



void count_b(int count[][5],char qt_b[][20]){
  for(int i=0;i<3;i++){
    for(int j=0;j<20;j++){
        if(qt_b[i][j]=='a'||qt_b[i][j]=='A') 
          count[i][0]+=1;
        if(qt_b[i][j]=='e'||qt_b[i][j]=='E')
          count[i][1]+=1;
        if(qt_b[i][j]=='i'||qt_b[i][j]=='I')
          count[i][2]+=1;
        if(qt_b[i][j]=='o'||qt_b[i][j]=='O')
          count[i][3]+=1;
        if(qt_b[i][j]=='u'||qt_b[i][j]=='U')  
          count[i][4]+=1;
    }
 printf("%d string has %da/%de/%di/%do/%du\n",i+1,count[i][0],count[i][1],count[i][2],count[i][3],count[i][4]);
}

}

void lower(char a[][20]){
  for(int i=0;i<3;i++){
    for(int j=0;a[i][j]!='\0';j++){
      if(a[i][j]>='A'&&a[i][j]<='Z'){
      a[i][j]=a[i][j]+32;
      }
       printf("%c",a[i][j]);
    }

      printf("\n");
  }
}









