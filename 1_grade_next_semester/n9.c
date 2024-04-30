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
                                                
				   
    char week[5][20]={"星期一",
                      "星期二",
                      "星期三",
                      "星期四",
                      "星期五"};
		
	
	puts("       一  二   三   四   五");
    qt_a(tpt);
    printf("\n");
    qt_b(tpt);
    printf("\n");
    qt_c(tpt);
    printf("\n");
    cmp(tpt);
return 0;
}

void qt_a(double tmp[][day]){                     //// 星期1到5的溫度 
    for(int i=0;i<pid;i++){
        printf("時段%d",i+1);
          for(int j=0;j<day;j++){
          printf(" %2.1f",tmp[i][j]);
          }
          printf("\n");
}
}

		void qt_b(double davg[][day]){                 //// 星期1~5的 平均溫度 
    double avg=0,sum=0;
    for(int i=0;i<day;i++,sum=0,avg=0){

        for(int j=0;j<pid;j++){
          sum+=davg[j][i];
        }
        avg=sum/3;
        printf("星期%d平均溫度是%2.2f\n",i+1,avg);
        
    }

}

	void qt_c(double pavg[][day]){                     /// 時段1~3的平均溫度 
    double avg=0,sum=0;
    for(int i=0;i<pid;i++,sum=0,avg=0){
        for(int j=0;j<day;j++){
            sum+=pavg[i][j];
        }
        avg=sum/5;
        printf("時段%d平均溫度是%2.2f\n",i+1,avg);
    }
}

	void d(int n, char d[][20]){                        //一個星期的陣列 
    for(int i=0;i<=20;i++){
        if(d[n][i]!='\0'){
             printf("%c",d[n][i]);
    }
        d[n][i]='\0';
    }
}
    

	void cmp(double a[][day]){                        //比較溫度 
    int max_r=0,max_c=0,min_r=0,min_c=0;
    double max=a[0][0],min=a[0][0];
    char week[5][20]={"星期一",
                      "星期二",
                      "星期三",
                      "星期四",
                      "星期五"};
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
    printf("最高溫的時段 \"");
    d(max_c,week);
    printf(" 時段%d\"\n",max_r+1);
    printf("最低溫的時段 \"");
    d(min_c,week);
    printf(" 時段%d\"\n",min_r+1);
}
