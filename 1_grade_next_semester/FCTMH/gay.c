#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define row 10
#define col 10
#define full 200

void seat(int dick[][col]);
void case_c(int dick[][col]);
int  case_d(void);
void inverse(int dick[][col]);
void onward(int dick[][col]);

int main()
{

puts("ZZZZZ III     ZZZZZ H  H EEEE N   N     W     W  AA  N   N  GGG ");
puts("   Z   I         Z  H  H E    NN  N     W     W A  A NN  N G     ");
puts("  Z    I        Z   HHHH EEE  N N N     W  W  W AAAA N N N G  GG ");
puts(" Z     I       Z    H  H E    N  NN      W W W  A  A N  NN G   G ");
puts("ZZZZZ III ____ZZZZZ H  H EEEE N   N ____  W W   A  A N   N  GGG ");
puts("           ____                      ____                         ");
puts("      H  H W     W      000  5555      11   000   ");
puts("      H  H W     W     0  00 5        111  0  00 ");
puts("      HHHH W  W  W     0 0 0 555       11  0 0 0 ");
puts("      H  H  W W W      00  0    5      11  00  0 ");
puts("      H  H   W W   ____ 000  555  ____11l1  000 ");
    puts("                ____           ____ ");

    char password[5]="2022";
	char enpassword[5],enter;
    int n=1,q6c=0,bk=0,count=0;
	int now_seat[row][col];	
	int e=0,caseB_r,caseB_c,caseB_count=0,stop=0,yn=0,fuck=0;
    char sat,s;
do{
		printf("Enter Psaaword:");
		scanf("%s",enpassword);
		if(strcmp(password,enpassword)==0){
		break;
		}		
			else if(n==3){
			printf("Wrong %d Times!BYE~~~\n",n);
				return 0;
				}
			else{			
			printf("Wrong %d Time\n",n);
			n++;
			}
				
	}while(n<=3);	

	now_seat[0][0]='/';
	for(int one_col=1,c=49;one_col<=9;one_col++,c++)
		now_seat[0][one_col]=c;
	for(int one_row=1,c=57;one_row<=9;one_row++,c--)
		now_seat[one_row][0]=c;
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			now_seat[i][j]='-';
		}
	}
	while(count<10){
		int random_r=rand()%10,random_c=rand()%10;
		if(random_r!=0 && random_c!=0){
            if(now_seat[random_r][random_c]!='*'){
			now_seat[random_r][random_c]='*';
			count++;
			}
        }	
	}


while(1){
    puts("***********{選位系統}**********");
    puts("*    a. 顯示現有座位          *");
    puts("*    b. 電腦排位              *");
    puts("*    c. 自主選位              *");
    puts("*    d. 系統結束              *");
    puts("*******************************");
    printf("選擇你想要的東西:" );
    fflush(stdin);
    scanf("%c",&enter);
        switch(enter)
    {
        case 'a':
        case 'A':
            seat(now_seat);
            system("pause");
            system("cls");
            break;
        case 'b':
        case 'B':
            yn=0;
	for(int q5=0;q5<1;q5++){   
	printf("輸入人數:");
    do{
    fuck=0;
    fflush(stdin);
	scanf("%d",&e);
	if(e==1){
        do{
        stop=0;
        while(caseB_count<1 && stop<=full){
			caseB_r=(rand()%9+1);
			caseB_c=(rand()%9+1);
		if(now_seat[caseB_r][caseB_c]!='*'){
			now_seat[caseB_r][caseB_c]='@';			
			caseB_count++;
        }else{
        stop++;
        if(stop>full){
        printf("have no seat\n");
        }
        continue;
        }
        
        } 
		seat(now_seat);
        printf("Are you satisfied(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){
            inverse(now_seat);			
            yn++;
            caseB_count=0;
            }
        else{
        printf("輸入錯誤\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y') 
        onward(now_seat);
       if(s=='n'||s=='N'){
        inverse(now_seat);
        printf("太難搞了吧？雜某484???\n");
       }
	}else if(e==2){
        do{
        stop=0;
		while(caseB_count<1 && stop<=full){
		caseB_r=(rand()%9+1);
		caseB_c=(rand()%8+1);
		if((now_seat[caseB_r][(caseB_c)+1]!='*') &&(now_seat[caseB_r][caseB_c]!='*')){   
		now_seat[caseB_r][caseB_c]='@';
		now_seat[caseB_r][(caseB_c)+1]='@';
		caseB_count++;	
		}else{
        stop++;
        if(stop>full){
        printf("座位滿了\n");
        }
        continue;
        }
        }
        seat(now_seat);
        printf("滿意嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){
            inverse(now_seat);
            yn++;
            caseB_count=0;
            }
        else{
        printf("輸入錯誤\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
        onward(now_seat);
       }
       if(s=='n'||s=='N'){       
       inverse(now_seat);
	   printf("太難搞了吧？雜某484\n");
       }
	}else if(e==3){
    do{
    stop=0;
    while(caseB_count<1 && stop<=full){
    caseB_r=(rand()%9+1);
    caseB_c=(rand()%7+1);
    if(((now_seat[caseB_r][caseB_c]!='*')&&(now_seat[caseB_r][(caseB_c)+1]!='*'))&&(now_seat[caseB_r][(caseB_c)+2]!='*')){
    now_seat[caseB_r][caseB_c]='@';
    now_seat[caseB_r][(caseB_c)+1]='@';
    now_seat[caseB_r][(caseB_c)+2]='@';
    caseB_count++;
    }else{    
    stop++;
    if(stop>full){
    printf("座位已滿\n");
    }
    continue;
    }
    }
    seat(now_seat);
        printf("滿意嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){            
            inverse(now_seat);
			yn++;
            caseB_count=0;
            }
        else{
        printf("輸入錯誤???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){        
        onward(now_seat);
       }
       if(s=='n'||s=='N'){       
       inverse(now_seat);
       printf("太難搞了吧？雜某484???\n");
       }
    
    }else if(e==4){
   
        
        do{
    stop=0;
    while(caseB_count<1 && stop<=full){
    caseB_r=(rand()%8+1);
    caseB_c=(rand()%6+1);
    if((now_seat[caseB_r][caseB_c]!='*')&&(now_seat[(caseB_r)][(caseB_c)+1]!='*')){
        if((now_seat[caseB_r][(caseB_c)+2]!='*')&&(now_seat[caseB_r][(caseB_c)+3]!='*'))
        {
            now_seat[caseB_r][caseB_c]='@';
            now_seat[caseB_r][(caseB_c)+1]='@';
            now_seat[caseB_r][(caseB_c)+2]='@';
            now_seat[caseB_r][(caseB_c)+3]='@';
            caseB_count++;           
        }
         else if((now_seat[caseB_r][(caseB_c)+2]='*')&&((now_seat[(caseB_r)+1][caseB_c]!='*')&&(now_seat[(caseB_r)+1][caseB_c+1]='*'))){    
            now_seat[caseB_r][caseB_c]='@';
            now_seat[caseB_r][(caseB_c)+1]='@';
            now_seat[(caseB_r)+1][(caseB_c)]='@';
            now_seat[(caseB_r)+1][(caseB_c)+1]='@';
            caseB_count++;
        } 
    }else{    
    stop++;
    if(stop>full){
    printf("座位已滿\n");
    }
    continue;
    }
    }    
    seat(now_seat);
        printf("Are you satisfied(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            
            }
        else if(s=='n'||s=='N'){
           yn++;
           caseB_count=0;
           inverse(now_seat);
        }
        else{
        printf("輸入錯誤???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
                onward(now_seat);
       }
       if(s=='n'||s=='N'){           
                inverse(now_seat);              
       printf("太難搞了吧？雜某484???\n");
       }
 
}else{
printf("輸入錯誤\n");
printf("Please enter1~4:");
fuck=1;
}
}while(fuck==1);
	caseB_count=0;
	system("pause");
	system("cls");

}


            system("cls");
        	break;
        case 'c':
        case 'C':
        	case_c(now_seat);
        	system("pause");
        	system("CLS");
        	break;
    	case 'd':
    	case 'D':
    		bk=0;
    		fflush(stdin);
    		printf("Continue(Y/N):");
			while(bk<1){
				q6c=case_d();
				if(q6c==1){
    				bk++;
    				system("cls");
					}
				else if(q6c==2)
    				return 0;
				else
					bk=0;
				}
				break;
		default:
			printf("輸入錯誤！\n請在輸入一次：\n");
			system("pause");
			system("cls");
}
}
}
void case_c(int csc[][col])
{
    int a=0,c=0,en=0;
    char b=0;
    
    printf("輸入你想要的位子(ex.7-8):");
    while(en<1){
    en=0;
    scanf("%d %c %d",&a, &b, &c);
    if((a>=1&&a<=9)&&(c>=1&&c<=9)){
        a=((a-10)*-1);
        if(csc[a][c]!='*'){
            csc[a][c]='@';
            seat(csc);
            en++;
            csc[a][c]='*';
        }else{
            printf("這邊已經有人了\n");
            printf("麻煩您選其他位置\n");
            printf("輸入:");
            }
    }else{
    printf("輸入錯誤\n");
    printf("請在輸入一次：");
    fflush(stdin);
    }
    }

}

void seat(int seat[][col]){
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			printf(" %c",seat[a][b]);
		}
		printf("\n");
	}
}



int case_d(){

    int bk=0;
    char ctn;
    fflush(stdin);
    scanf("%c",&ctn);
    if(ctn=='y'||ctn=='Y'){
    bk=1;
    }else if(ctn=='n'||ctn=='N'){
        bk=2;
    }else{
    printf("Wrong Enter\n");
    printf("Enter again:");
    bk=0;
    }
   return bk;
}

void inverse(int back[][col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<=col;j++){
			if(back[i][j]=='@')
			back[i][j]='-';
		}
	}
}

void onward(int onward[][col]){
	for(int i=0;i<row;i++){
		for(int j=0;j<=col;j++){
			if(onward[i][j]=='@')
			onward[i][j]='*';
		}
	}
}






