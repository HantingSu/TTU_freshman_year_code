/*這次作業真的有比較難!看到題目的時候其實我也想了一段時間，不能像之前一樣一看到就直接想到解決辦法
 * ，但是我也很高興這次作業這麼有挑戰性，因為這終於讓我有動腦的感覺！剛看到題目時，我就知道這次的
 * 程式會比較大支，所以我刻意把它包成很多副函式，這樣讓我的主函式在寫的時候清楚很多！需要使用某個
 * 小部分的時候也很方便，而且除錯的時候也比較輕鬆，都能夠分段處理！以後我應該會多用這種方法來解決
 * 作業這種大程式！這次算是有學到東西！跟之前的作業相比，我很滿意老師這次出的作業
*/
#include<stdio.h>   //include library stdio.h
#include<stdlib.h>  //include library stdlib.h
#include<string.h>  //include library string.h
#define row 10      //define row is 10
#define col 10      //define col is 10
#define no_seat 200 //define no_seat is 200

void seat(int now_seat[][col]);    //declares procedure "seat" to be a void data type,This is print current seating and process case A
void q5_seat(int now_seat[][col]); //declares procedure "q5_seat" to be a void data type,This procedure is process case B
void q6_seat(int now_seat[][col]); //declares procedure "q6_seat" to be a void data type,This procedure is process case C
int  back(void);				   //declares procedure "back" to be an integer data type,This procedure is  process case D
void menu(void);				   //declares procedure "menu" to be a void data type,This  procedure is process to print menu
void ID(void);					   //declares procedure "ID" to be a void data type,This procedure is  process to print my personalization page
void reverse(int now_seat[][col]); //declares procedure "reverse" to be a void data type,This is reverse seat to '-'
void forward(int a[][col]);		   //declares procedure "forward" to be a void data type,This is set '@' to '*'to express already seat

int main()  //main function
{
    char ps[5]="2022";				//declares password 2022
	char en[5],enter;				//declares en,enter to be char data type
    int n=1,q6c=0,bk=0,count=0;     //declares n,q6_c,bk,count
	int now_seat[row][col];			//declare now_seat to be integer array 
	
	now_seat[0][0]='/';				//set now_seat[0][0]='/'
	for(int first_col=1,c=49;first_col<=9;first_col++,c++)	//use for loop to set 0 row to be 1~9
		now_seat[0][first_col]=c;
	for(int first_row=1,c=57;first_row<=9;first_row++,c--)  //use for loop to set 0 column to be 9~1
		now_seat[first_row][0]=c;
	for(int i=1;i<row;i++){									//use for loop to set 1-1~9-9 to be '-'(cavancies)[29-33]
		for(int j=1;j<col;j++){
			now_seat[i][j]='-';
		}
	}
	while(count<10){										//34~42 make 10 random seat already have people
		int rand_r=rand()%10,rand_c=rand()%10;
		if(rand_r!=0 && rand_c!=0){
            if(now_seat[rand_r][rand_c]!='*'){
			now_seat[rand_r][rand_c]='*';
			count++;
			}
        }	
	}
ID();  //print my personalization page
do{									//use do_while to set password and login 

		printf("Enter Psaaword:");			////print enter password
		scanf("%s",en);						//enter password
		if(strcmp(ps,en)==0){				//if you set passwore = you enter passowrd
			printf("WILLCOME TAIN_ZHI_DAO\n"); //print string and break this loop
			system("pause");
			break;
		}		
			else if(n==3){				//else if n=3,end the program directly
			printf("Wrong %d Times!BYE~~~\n",n);
				return 0;
				}
			else{			
			printf("Wrong %d Time\n",n);  //print wrong which time
			n++;
			}
				
	}while(n<=3);	
system("cls");
while(1){
menu();								 //print menu
    scanf("%c",&enter);				//enter what do you want to do?
        switch(enter)				//switch
    {
        case 'a':					
        case 'A':					//case a,A
            seat(now_seat);			//call function seat(now_seat)
            system("pause");		//click to continue
            system("cls");			//clean up screen
            break;                  //command "break"
        case 'b':					
        case 'B':					//case b,B
        	q5_seat(now_seat);      //call function q5_seat(now_seat)
            system("cls");			//clean up screen
        	break;					//command "break"				
        case 'c':					
        case 'C':					//case c,C
        	q6_seat(now_seat);		//call function q6_seat(now_seat)
        	system("pause");		//click to continue
        	system("CLS");			//clean up screen
        	break;					//command "break"
    	case 'd':
    	case 'D':					//case d,D
    		bk=0;                   //set bk=0
    		fflush(stdin);			//clean up buffer
    		printf("Continue(Y/N):");  //print this
			while(bk<1){				//while loop
				q6c=back();				//set q6c=function back() return value
				if(q6c==1){				//if return value is 1
    				bk++;				
    				system("cls");		//clean ip screen
					}
				else if(q6c==2)			//if return value is 2
    				return 0;			//end all of program
				else
					bk=0;				//else bk=0
				}
				break;					//command "break"
		default:						//default print those
			printf("I DON'T KNOW WHAT ARE YOU SAY\nENTER AGAIN\n");
			system("pause");		//click to continue
			system("cls");			//clean up screen
}
}
}

void q5_seat(int now_seat[][col]){   //function q5_seat
		int e=0,q5_r,q5_c,q5_count=0,stop=0,yn=0,fuck=0;		//declares those variable to be integer data type
        char sat,s;												//declares char sat,s
	for(int q5=0;q5<1;q5++){									//for loop
	printf("Please enter the number of people:");				//print this
    do{															//do_while
    fuck=0;														//set fuck=0
    fflush(stdin);												//clean up buffer
	scanf("%d",&e);												//enter 1~4 let me know how many people do you have
	if(e==1){													//if one people
        do{
        stop=0;
        while(q5_count<1 && stop<=no_seat){						//search seat
			q5_r=(rand()%9+1);
			q5_c=(rand()%9+1);
		if(now_seat[q5_r][q5_c]!='*'){							//if no people seat here
			now_seat[q5_r][q5_c]='@';							//choose here
			q5_count++;
        }else{													//else
        stop++;													//stop+1
        if(stop>no_seat){										//if search 200 times and there still no seat
        printf("have no seat\n");								//print this
        }
        continue;												//command "continue"
        }
        
        } 
		seat(now_seat);											//print now_seat
        printf("Are you satisfied(y/n):");						//print this
        fflush(stdin);											//clean up buffer
        scanf("%c",&s);											//enter satisfied or not
        if(s=='Y'||s=='y'){										//if y or Y
            break;												//break loop
            }
        else if(s=='n'||s=='N'){								//if n or N
            reverse(now_seat);									//reverse '@' to '-'
            yn++;												
            q5_count=0;
            }
        else{													//else print this
        printf("供三小啦???\n");
        }
    }while(yn<=1);												//do_while execution condition 
    
       if(s=='y'||s=='Y')										//if satisfied
        forward(now_seat);										//let '@'to be '*'
       if(s=='n'||s=='N'){										//if unsatisfied
        reverse(now_seat);										//reverse to '-'
        printf("不滿意自己選啦乾!\n");							//print this
       }
	}else if(e==2){												//if have 2 peoples 
        do{														//do_while
        stop=0;
		while(q5_count<1 && stop<=no_seat){						//search seat
		q5_r=(rand()%9+1);						
		q5_c=(rand()%8+1);
		if((now_seat[q5_r][(q5_c)+1]!='*') &&(now_seat[q5_r][q5_c]!='*')){   //if meet the criteria
		now_seat[q5_r][q5_c]='@';
		now_seat[q5_r][(q5_c)+1]='@';
		q5_count++;	
		}else{													//else stop+1
        stop++;				
        if(stop>no_seat){										//if search 200 time and there still no seat
        printf("seat overflow\n");								//print this
        }
        continue;												//command 'continue'
        }
        }
        seat(now_seat);											//print now seat
        printf("Are you satisfied(y/n):");						//print this
        fflush(stdin);											//clean up buffer
        scanf("%c",&s);											//enter satisfied or not
        if(s=='Y'||s=='y'){										//the logic below is the same as before
            break;
            }
        else if(s=='n'||s=='N'){
            reverse(now_seat);
            yn++;
            q5_count=0;
            }
        else{
        printf("供三小啦???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
        forward(now_seat);
       }
       if(s=='n'||s=='N'){       
       reverse(now_seat);
	   printf("不滿意自己選啦乾!\n");
       }
	}else if(e==3){
    do{
    stop=0;
    while(q5_count<1 && stop<=no_seat){
    q5_r=(rand()%9+1);
    q5_c=(rand()%7+1);
    if(((now_seat[q5_r][q5_c]!='*')&&(now_seat[q5_r][(q5_c)+1]!='*'))&&(now_seat[q5_r][(q5_c)+2]!='*')){
    now_seat[q5_r][q5_c]='@';
    now_seat[q5_r][(q5_c)+1]='@';
    now_seat[q5_r][(q5_c)+2]='@';
    q5_count++;
    }else{    
    stop++;
    if(stop>no_seat){
    printf("no three seats in a row\n");
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
            reverse(now_seat);
			yn++;
            q5_count=0;
            }
        else{
        printf("供三小啦???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){        
        forward(now_seat);
       }
       if(s=='n'||s=='N'){       
       reverse(now_seat);
       printf("不滿意自己選啦乾!\n");
       }
    
    }else if(e==4){
   
        
        do{
    stop=0;
    while(q5_count<1 && stop<=no_seat){
    q5_r=(rand()%8+1);
    q5_c=(rand()%6+1);
    if((now_seat[q5_r][q5_c]!='*')&&(now_seat[(q5_r)][(q5_c)+1]!='*')){
        if((now_seat[q5_r][(q5_c)+2]!='*')&&(now_seat[q5_r][(q5_c)+3]!='*'))
        {
            now_seat[q5_r][q5_c]='@';
            now_seat[q5_r][(q5_c)+1]='@';
            now_seat[q5_r][(q5_c)+2]='@';
            now_seat[q5_r][(q5_c)+3]='@';
            q5_count++;           
        }
         else if((now_seat[q5_r][(q5_c)+2]='*')&&((now_seat[(q5_r)+1][q5_c]!='*')&&(now_seat[(q5_r)+1][q5_c+1]='*'))){    
            now_seat[q5_r][q5_c]='@';
            now_seat[q5_r][(q5_c)+1]='@';
            now_seat[(q5_r)+1][(q5_c)]='@';
            now_seat[(q5_r)+1][(q5_c)+1]='@';
            q5_count++;
        } 
    }else{    
    stop++;
    if(stop>no_seat){
    printf("no four seats in a row\n");
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
           q5_count=0;
           reverse(now_seat);
        }
        else{
        printf("供三小啦???\n");
        }
    }while(yn<=1);
    
       if(s=='y'||s=='Y'){ 
                forward(now_seat);
       }
       if(s=='n'||s=='N'){           
                reverse(now_seat);              
       printf("不滿意自己選啦乾!\n");
       }
 
}else{					//else
printf("輸入錯誤\n");		//print this
printf("Please enter1~4:");	//print this
fuck=1;						//fuck = 1
}
}while(fuck==1);  //do_while execution condition 
	q5_count=0;   //let q5_count =0 
	system("pause");		//click to continue
	system("cls");			//clean up screen

}
}

void q6_seat(int q6[][col])			//function q6_seat
{
    int a=0,c=0,en=0;				//declares those parameter to be integer data type
    char b=0;						//declares b to be char data type
    
    printf("Enter the seat you want(ex.2-2):");			// print this
    while(en<1){										//while ioop
    en=0;
    scanf("%d %c %d",&a, &b, &c);						//enter that you want to seat
    if((a>=1&&a<=9)&&(c>=1&&c<=9)==1){					//set seating scope is (1-1)~(9-9)
        a=((a-10)*-1);									//because row number order is 9~1,so let (a-10)*-1 to be 9~1
        if(q6[a][c]!='*'){								//if now seat have no people
            q6[a][c]='@';								//change '-'to '@'
            seat(q6);									//print now_seat
            en++;			
            q6[a][c]='*';								//change '@' to '*'
        }else{											//else if here have somebody seat
            printf("There's already someone here\n");		//print this
            printf("Plaese choose other seat...\n");
            printf("Enter:");
            }
    }else{
    printf("Wrong Entering!\n");						//else you enter wrong number
    printf("Enter again:");
	fflush(stdin);
    }
    }

}

void seat(int seat[][col]){							//function seat(), this is process to print now seat
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			printf(" %c",seat[a][b]);         
		}
		printf("\n");
	}
}

void menu(){												//function menu,print menu
    puts("----------[選位系統]-----------");
    puts("|    a. 顯示現有座位          |");
    puts("|    b. 電腦排位              |");
    puts("|    c. 自主選位              |");
    puts("|    d. 系統結束              |");
    puts("-------------------------------");
    printf("What Do You Want:" );
    fflush(stdin);											//clean up buffer
    return;
}

void ID(){																		//function ID,process print my personalization page
puts(" TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO           ");	
puts("   TT   A  A  I  NN  N        Z  H  H  I      D  D A  A O   O          ");
puts("   TT   AAAA  I  N N N       Z   HHHH  I      D  D AAAA O   O          ");
puts("   TT   A  A  I  N  NN      Z    H  H  I      D  D A  A O   O          ");
puts("   TT   A  A III N   N ____ZZZZZ H  H III ____DDD  A  A  OOO           ");
puts("                       ____               ____                         ");
puts("                   HH   HH  OOOOO  MM    MM EEEEEEE         ");
puts("                   HH   HH OO   OO MMM  MMM EE              ");
puts("                   HHHHHHH OO   OO MM MM MM EEEEE           ");
puts("                   HH   HH OO   OO MM    MM EE              ");
puts("                   HH   HH  OOOO0  MM    MM EEEEEEE _______ ");
puts("                                                            ");
puts("  WW      WW  OOOOO  RRRRRR  KK  KK          00000      44   22222   6666  ");
puts("  WW      WW OO   OO RR   RR KK KK          00   00    444       22 66       ");
puts("  WW   W  WW OO   OO RRRRRR  KKKK           00   00  44  4   22222  66666   ");
puts("   WW WWW WW OO   OO RR  RR  KK KK          00   00 44444444 22     66  66   ");
puts("    WW   WW   OOOO0  RR   RR KK  KK _______  00000     444   222222  6666    ");
return ;
}


int back(){    //function back,(case C

    int bk=0;
    char ctn;
    fflush(stdin);					//clean up buffer
    scanf("%c",&ctn);				//enter y or n to decide continue or not
    if(ctn=='y'||ctn=='Y'){
    bk=1;
    }else if(ctn=='n'||ctn=='N'){
        bk=2;
    }else{
    printf("Wrong Enter\n");   //if you enter wrong thing,print this,and requier enter again
    printf("Enter again:");
    bk=0;
    }
   return bk;                  //return variable to decide
}

void reverse(int back[][col]){  //function reverse
	for(int i=0;i<row;i++){				//let '@' reverse to '-'(vacancy)
		for(int j=0;j<=col;j++){
			if(back[i][j]=='@')
			back[i][j]='-';
		}
	}
}

void forward(int forword[][col]){  //function forward
	for(int i=0;i<row;i++){				//let '@' change to '*',that mean you want to seat here
		for(int j=0;j<=col;j++){
			if(forword[i][j]=='@')
			forword[i][j]='*';
		}
	}
}






