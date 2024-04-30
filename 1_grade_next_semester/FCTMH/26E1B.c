#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define col 10
#define row 10
#define cant_find 250

void MS(){
puts(" ######  ##   ##   #####   ###  ###           ######   #######  #######");
 puts("##  ##  ##   ##  ##   ##   ##  ##            ##  ##   ##   #   ##   #");
 puts("##  ##  ##   ##  ##         ####             ##  ##   ##       ##");
 puts("#####   ##   ##   #####      ##    ######    #####    ####     ####");
 puts("##  ##  ##   ##       ##     #     ######    ##  ##   ##       ##");
 puts("##  ##  ##   ##  ##   ##     ##              ##  ##   ##   #   ##   #");
 puts("######    #####    #####     ####            ######   #######  #######");

 puts("######     ##     #####              ####     ####");
 puts("##         ##     ##  ##     #      ##  ##   ##  ##");
 puts("##        ###     ##  ##    ##          ##   ##");
 puts("####       ##     #####    #######     ##    #####");
 puts("##         ##     ##  ##   #######   ##      ##  ##");
 puts("##         ##     ##  ##    ##      ##       ##  ##");
 puts("######   ######   #####      #      ######    ####");

 puts("##  ##    ####    ##   ##  ######            ##   ##   ####    #####    ##  ##");
 puts("##  ##   ##  ##   ### ###  ##         #      ##   ##  ##  ##   ##  ##   ## ##");
 puts("##  ##   ##  ##   #######  ##        ##      ##   ##  ##  ##   ##  ##   ####");
 puts("######   ##  ##   ## # ##  ####     #######  ## # ##  ##  ##   #####    ###");
 puts("##  ##   ##  ##   ##   ##  ##       #######  #######  ##  ##   ####     ####");
 puts("##  ##   ##  ##   ##   ##  ##        ##      ### ###  ##  ##   ## ##    ## ##");
 puts("##  ##    ####    ##   ##  ######     #      ##   ##   ####    ##  ##   ##  ## ");
 return;
}

void inverse(int rv[][col]){
	for(int a=0;a<row;a++){
		for(int b=0;b<=col;b++){
			if(rv[a][b]=='@')
			rv[a][b]='-';
		}
	}
}

void obey(int f[][col]){
	for(int a=0;a<row;a++){
		for(int b=0;b<=col;b++){
			if(f[a][b]=='@')
			f[a][b]='*';
		}
	}
}


void problem_a(int seat[][col]){
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			printf(" %c",seat[a][b]);
		}
		printf("\n");
	}
}


void problem_b(int pb_seat[][col]){
		int e=0,pb_r,pb_c,pb_count=0,stop=0,yn=0,fuck=0;
        char sat,s;
	for(int q5=0;q5<1;q5++){   
	printf("請輸入人數:");
    do{
    fuck=0;
    fflush(stdin);
	scanf("%d",&e);
	if(e==1){
        do{
        stop=0;
        while(pb_count<1 && stop<=cant_find){
			pb_r=(rand()%9+1);
			pb_c=(rand()%9+1);
		if(pb_seat[pb_r][pb_c]!='*'){
			pb_seat[pb_r][pb_c]='@';			
			pb_count++;
        }else{
        stop++;
        if(stop>cant_find){
        printf("座位已滿\n");
        }
        continue;
        }
        
        } 
		problem_a(pb_seat);
        printf("高興了嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){
            inverse(pb_seat);			
            yn++;
            pb_count=0;
            }
        else{
        printf("錯誤輸入???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y') 
        obey(pb_seat);
       if(s=='n'||s=='N'){
        inverse(pb_seat);
        printf("還不滿意啊？\n就你問題最多!!!\n");
       }
	}else if(e==2){
        do{
        stop=0;
		while(pb_count<1 && stop<=cant_find){
		pb_r=(rand()%9+1);
		pb_c=(rand()%8+1);
		if((pb_seat[pb_r][(pb_c)+1]!='*') &&(pb_seat[pb_r][pb_c]!='*')){   
		pb_seat[pb_r][pb_c]='@';
		pb_seat[pb_r][(pb_c)+1]='@';
		pb_count++;	
		}else{
        stop++;
        if(stop>cant_find){
        printf("座位已滿\n");
        }
        continue;
        }
        }
        problem_a(pb_seat);
        printf("高興了嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){
            inverse(pb_seat);
            yn++;
            pb_count=0;
            }
        else{
        printf("閃燈問號???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
        obey(pb_seat);
       }
       if(s=='n'||s=='N'){       
       inverse(pb_seat);
	   printf("還不滿意啊？\n就你問題最多!!!\n");
       }
	}else if(e==3){
    do{
    stop=0;
    while(pb_count<1 && stop<=cant_find){
    pb_r=(rand()%9+1);
    pb_c=(rand()%7+1);
    if(((pb_seat[pb_r][pb_c]!='*')&&(pb_seat[pb_r][(pb_c)+1]!='*'))&&(pb_seat[pb_r][(pb_c)+2]!='*')){
    pb_seat[pb_r][pb_c]='@';
    pb_seat[pb_r][(pb_c)+1]='@';
    pb_seat[pb_r][(pb_c)+2]='@';
    pb_count++;
    }else{    
    stop++;
    if(stop>cant_find){
    printf("座位已滿\n");
    }
    continue;
    }
    }
    problem_a(pb_seat);
        printf("高興了嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            }
        else if(s=='n'||s=='N'){            
            inverse(pb_seat);
			yn++;
            pb_count=0;
            }
        else{
        printf("閃燈問號???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){        
        obey(pb_seat);
       }
       if(s=='n'||s=='N'){       
       inverse(pb_seat);
       printf("還不滿意啊？\n就你問題最多!!!\n!\n");
       }
    
    }else if(e==4){
   
        
        do{
    stop=0;
    while(pb_count<1 && stop<=cant_find){
    pb_r=(rand()%8+1);
    pb_c=(rand()%6+1);
    if((pb_seat[pb_r][pb_c]!='*')&&(pb_seat[(pb_r)][(pb_c)+1]!='*')){
        if((pb_seat[pb_r][(pb_c)+2]!='*')&&(pb_seat[pb_r][(pb_c)+3]!='*'))
        {
            pb_seat[pb_r][pb_c]='@';
            pb_seat[pb_r][(pb_c)+1]='@';
            pb_seat[pb_r][(pb_c)+2]='@';
            pb_seat[pb_r][(pb_c)+3]='@';
            pb_count++;           
        }
         else if((pb_seat[pb_r][(pb_c)+2]='*')&&((pb_seat[(pb_r)+1][pb_c]!='*')&&(pb_seat[(pb_r)+1][pb_c+1]='*'))){    
            pb_seat[pb_r][pb_c]='@';
            pb_seat[pb_r][(pb_c)+1]='@';
            pb_seat[(pb_r)+1][(pb_c)]='@';
            pb_seat[(pb_r)+1][(pb_c)+1]='@';
            pb_count++;
        } 
    }else{    
    stop++;
    if(stop>cant_find){
    printf("座位已滿\n");
    }
    continue;
    }
    }    
    problem_a(pb_seat);
        printf("高興了嗎？(y/n):");
        fflush(stdin);
        scanf("%c",&s);
        if(s=='Y'||s=='y'){
            break;
            
            }
        else if(s=='n'||s=='N'){
           yn++;
           pb_count=0;
           inverse(pb_seat);
        }
        else{
        printf("閃燈問號???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
                obey(pb_seat);
       }
       if(s=='n'||s=='N'){           
                inverse(pb_seat);              
       printf("還不滿意啊？\n就你問題最多!!!\n");
       }
 
}else{
printf("輸入錯誤\n");
printf("輸入1~4:");
fuck=1;
}
}while(fuck==1);
	pb_count=0;
	system("pause");
	system("cls");

}
}


int problem_d(){

    int ret=0;
    char ctn;
    fflush(stdin);
    scanf("%c",&ctn);
    if(ctn=='y'||ctn=='Y'){
    ret=1;
    }else if(ctn=='n'||ctn=='N'){
        ret=2;
    }else{
    printf("錯誤輸入\n");
    printf("再次輸入:");
    ret=0;
    }
   return ret;
}



int main(void)
{
    char psw[5]="2022";
	char en[5],etr,b=0;
    int n=1,q6=0,ret=0,count=0,a=0,c=0,ent=0;
	int now_seat[row][col];	

	MS();

do{
		printf("使用者密碼:");
		scanf("%s",en);
		if(strcmp(psw,en)==0){
		break;
		}		
			else if(n==3){
			printf("已經錯%d次!吼！抓到！~~~\n",n);
				return 0;
				}
			else{			
			printf("已錯%d次\n",n);
			n++;
			}
				
	}while(n<=3);	


	now_seat[0][0]='/';
	for(int zero_col=1,c=49;zero_col<=9;zero_col++,c++)
		now_seat[0][zero_col]=c;
	for(int zero_row=1,c=57;zero_row<=9;zero_row++,c--)
		now_seat[zero_row][0]=c;
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			now_seat[i][j]='-';
		}
	}
	while(count<10){
		int rand_r=rand()%10,rand_c=rand()%10;
		if(rand_r!=0 && rand_c!=0){
            if(now_seat[rand_r][rand_c]!='*'){
			now_seat[rand_r][rand_c]='*';
			count++;
			}
        }	
	}
while(1){
	puts("<<<<<<<<<<<[選位系統]>>>>>>>>>>");
    puts("<    A. 顯示現有座位          >");
    puts("<    B. 電腦排位              >");
    puts("<    C. 自主選位              >");
    puts("<    D. 系統結束              >");
    puts("<<<<<<<<<<<<<<|>>>>>>>>>>>>>>>>");
    printf("請輸入您想做的事:" );
    fflush(stdin);
    scanf("%c",&etr);
        switch(etr)
    {
        case 'a':
        case 'A':
            for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			printf(" %c",now_seat[a][b]);
		}
		printf("\n");
	}
            system("pause");
            system("cls");
            break;
        case 'b':
        case 'B':
        	problem_b(now_seat);
            system("cls");
        	break;
        case 'c':
        case 'C':
		a=0,c=0,ent=0;
    printf("輸入您想要的座位(ex.2-2):");
    while(ent<1){
    ent=0;
	fflush(stdin);
    scanf("%d %c %d",&a, &b, &c);
    if((a>=1&&a<=9)&&(c>=1&&c<=9)==1){
        a=((a-10)*-1);
        if(now_seat[a][c]!='*'){
            now_seat[a][c]='@';
            problem_a(now_seat);
            ent++;
            now_seat[a][c]='*';
        }else{
            printf("這兒有人了\n");
            printf("選其他位置吧...\n");
            printf("在此輸入重選:");
            }
    }else{
    printf("輸入錯誤\n");
    printf("再次輸入:");
    }
    }
			system("pause");
        	system("CLS");
        	break;
    	case 'd':
    	case 'D':
    		ret=0;
    		fflush(stdin);
    		printf("繼續嗎？(Y/N):");
			while(ret<1){
				q6=problem_d();
				if(q6==1){
    				ret++;
    				system("cls");
					}
				else if(q6==2)
    				return 0;
				else
					ret=0;
				}
				break;
		default:
			printf("輸入錯誤\n請在輸入一次\n");
			system("pause");
			system("cls");
}
}
}
