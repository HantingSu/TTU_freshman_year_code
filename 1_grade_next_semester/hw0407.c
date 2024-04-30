#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ps[5]="2022";
	char en[5];
	int n=0,r,p,m=0;
	char e,t,c;
	char sw;
puts(" TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO           ");  //個人化圖片開始
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
puts("  WW      WW  OOOOO  RRRRRR  KK  KK          00000      44    00000   7777777  ");
puts("  WW      WW OO   OO RR   RR KK KK          00   00    444   00   00     777 ");
puts("  WW   W  WW OO   OO RRRRRR  KKKK           00   00  44  4   00   00    777  ");
puts("   WW WWW WW OO   OO RR  RR  KK KK          00   00 44444444 00   00   777   ");
puts("    WW   WW   OOOO0  RR   RR KK  KK _______  00000     444    00000   777    ");  //個人化圖片結束  
do{												//do while來設定輸入密碼
		printf("請輸入密碼:");		//print enter password
		scanf("%s",en);		//you can
		if(strcmp(ps,en)==0){		//if you set passwore = you enter passowrd
		break;		//break this loop
		}		
			else if(n==3){		//else if n=3,end the program directly
			printf("錯%d次!再見~~~\n",n+1);
				return 0;
				}
			else{			//else print 錯幾次？？？
			printf("錯%d次!\n",n+1);
			n++;
			}
				
	}while(n<=3);	//do while  condition is n<=3

			system("CLS"); //clean up screen
			menu:  //mark goto command "menu"
			puts("---------------------------------");		//個人化介面（menu)開始
			puts("|      a. 畫出n階直角三角形      |");
			puts("|      b. 顯示九九乘法表         |");
			puts("|      c. 結束                   |");	
			puts("---------------------------------");		//個人化介面(menu)結束
			printf("enter case:");	//print enter what you want to do?
			fflush(stdin);  //clean up buffer
			scanf("%c",&sw); //enter your command(case)
			switch(sw)  //use switch to judgment what you enter command
			{
				case 'a':     //case a;
				case 'A':	  //case A;
					system("CLS"); //claen up screen 
					restart_a:   // mark goto command"restart_a"
					printf("Enter char(a~n)\n");		//print Enter char(a~n)
					fflush(stdin);    //clean up buffer
				    scanf("%c",&e);   //enter a char to print you want to print triangle
				    fflush(stdin);   //clean up buffer
				    r=e;  //row
				    p=e;  //
				    
					if(e>='a'&&e<='n'){
					for(int i=0;i<=(r-97);i++)  //triangle for loop
					    {
					        p=i;	//
					        for(int n=1;n<=(r-97)-i;n++)	//
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
					}else{  //if char not in a~n
						printf("輸入錯誤 重新輸入\n");  //print this
						goto restart_a;  //go back to rastart_a
					}
						system("pause");  //click to continue
						system("CLS");  //clean up scren
						goto menu;  //go back to menu
				case 'b':		//case b
				case 'B':		//case B
				restart_b:   //maek goto command"restart_b"
					printf("Enter one number(1~9):");	//print this
					scanf("%d",&m); //enter what you want to print n*n multiplication 
					if(m>=1&&m<=9){		//if m in 1~9 do for loop
					for(int a=1;a<=m;a++){   //for loop by 9*9 multiplication
						for(int b=1;b<=m;b++)
						printf("%d*%d=%d ",a,b,a*b);
					printf("\n");
					}
				}else{  //if m not in 1~9
					printf("Wrong input,Please enter again\n");	 //print this
					goto restart_b;  //go back to restart_b
				}
				system("pause"); //click to continue
				system("CLS");	//clean up screen
				goto menu;		//go back to menu
				case 'c':  //case c
				case 'C':  //case C
				restart_c:  //mark goto command"restart_c"
					printf("Continue?(y/n)"); //print this
					fflush(stdin);		//clean up buffer
					scanf("%c",&c);			//enter a char to judement do you want to continue
					if(c=='y'||c=='Y'){ //if c =y or c=Y
						system("CLS");	//clean up screen
						goto menu;		//go back menu
					}
					if(c=='n' || c=='N'){			//if c=n or c=N			
						return 0;		//end all of program
					}else{		//else
						printf("錯誤訊息 請再輸入一次'\n");		//print this
						goto restart_c;			//go back to restart_c
					}
				default:  //if not a,b,c or A,B,C
					printf("錯誤輸入\n請再輸入一次\n");   //print this
					system("pause"); //click to continue
					system("CLS");  //clean up screen
					goto menu; //go back to menu
		}

return 0;	//the end
}
 

