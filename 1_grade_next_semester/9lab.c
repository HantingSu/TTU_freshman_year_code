#include<stdio.h>
#include<string.h>
#define pid 3
#define day 5

void qt_a(double a[][day]);
void qt_b(double a[][day]);
void qt_c(double a[][day]);
void d(int n,char d[][20]);
void cmp(double a[][day]);

int main(){

    double tpt[pid][day]={{18.2, 17.3, 15.0, 13.4, 21.1},
                          {23.8, 25.1, 20.6, 17.8, 25.3},
                          {20.6, 21.5, 18.4, 15.7, 22.7}};

    char week[5][20]={"MONDAY",
                      "TUESDAY",
                      "WEDNESDAY",
                      "THURSDAY",
                      "FRIDAY"};

puts("          MON    TUE    WED    THR    FRI");
    qt_a(tpt);
    puts("--------------------------------------------");
    qt_b(tpt);
    puts("********************************************");
    qt_c(tpt);
    puts("=============================================");
    cmp(tpt);
return 0;
}

void qt_a(double tmp[][day]){
    for(int i=0;i<pid;i++){
        printf("Peiiod%d",i+1);
          for(int j=0;j<day;j++){
          printf("   %2.1f",tmp[i][j]);
          }
          printf("\n");
}
}

void qt_b(double davg[][day]){
    double avg=0,sum=0;
    for(int i=0;i<day;i++,sum=0,avg=0){
        for(int j=0;j<pid;j++){
            sum+=davg[j][i];
        }
        avg=sum/3;
        printf("Day%d average temperature is %2.2f\n",i+1,avg);
        
    }

}

void qt_c(double pavg[][day]){
    double avg=0,sum=0;
    for(int i=0;i<pid;i++,sum=0,avg=0){
        for(int j=0;j<day;j++){
            sum+=pavg[i][j];
        }
        avg=sum/5;
        printf("Period%d average temperature is %2.2f\n",i+1,avg);
    }
}

void d(int n, char d[][20]){
    for(int i=0;i<=20;i++){
        if(d[n][i]!='\0'){
             printf("%c",d[n][i]);
    }
        d[n][i]='\0';
    }
}
    

void cmp(double a[][day]){
    int max_r=0,max_c=0,min_r=0,min_c=0;
    double max=a[0][0],min=a[0][0];
    char week[5][20]={"MONDAY",
                      "TUESDAY",
                      "WEDNESDAY",
                      "THURSDAY",
                      "FRIDAY"};
   char wk[20];
    for(int i=0;i<pid;i++){
        for(int j=0;j<day;j++){
            if(max<a[i][j]){
                max=a[i][j];
                max_r=i;
                max_c=j;
            }
            if(min>a[i][j]){
               min=a[i][j];
                min_r=i;
                min_c=j;
            }
        }
    }
    printf("The Highest temperature period is \"");
    d(max_c,week);
    printf(" PERIOD%d\"\n",max_r+1);
    printf("The Lowest temperature period is \"");
    d(min_c,week);
    printf(" PERIOD%d\"\n",min_r+1);
}





