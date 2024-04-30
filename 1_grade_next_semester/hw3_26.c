#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	char ps[5]="2022";   //設定密碼是2022
	char p[5];
	char e;
	int a;
puts(" TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO           ");	//個人化圖案開始
puts("   TT   A  A  I  NN  N        Z  H  H  I      D  D A  A O   O          ");
puts("   TT   AAAA  I  N N N       Z   HHHH  I      D  D AAAA O   O          ");
puts("   TT   A  A  I  N  NN      Z    H  H  I      D  D A  A O   O          ");
puts("   TT   A  A III N   N ____ZZZZZ H  H III ____DDD  A  A  OOO           ");
puts("                       ____               ____                         ");
puts("111111111111111111110101101");
puts("111100001111111101111111001");
puts("111111111101001010101000011");
puts("110101000101010101010111001");
puts("101011000000010101011110101");
puts("1011010su3g4196t a87???1010");
puts("101011101010110005464101001");
puts("111111111111111136514361111");
puts("1111000011111111446154111120");
puts("1111111111010000003654536411");
puts("11235465010100010101010001");
puts("5k4yji4u,4g4n0 vul3468746954");
puts("su35k4yji4u,45p[ 2lk7tj 2lk7tl zx042k7]");
puts("1010110000654600010101101101");
puts("1111111111111+6541111110001111");
puts("yji4u,4c96w8 a8 t;6t;6tjh hji4");
puts("111111111101000056461140100011");
puts("110101000101010100546101000001");
puts("101011000000010105456101000101");  //個人化圖案結束
system("PAUSE");  //按一下走下一步
system("CLS");  //清理螢幕

printf("請輸入四個數字密碼:");
scanf("%s",p);  //輸入密碼
if(strcmp(ps,p)==0)   //如果字串比較相同，則執行下列程式
{
	printf("HELLO~~~\n");   //說你好
	fflush(stdin);  //清空記憶體
	system("pause");  //按一下跑下一步
	system("CLS");  //清除螢幕
puts("---------------------------------");  //跑出表格開始
puts("|     'A'...'Z' Uppercase       |");
puts("|     'a'...'z' Lowercase       |");
puts("|     '0'...'9' Digit           |");
puts("|     Otherwise  : Your name    |");
puts("---------------------------------");  //跑出表格結束
printf("請輸入一個字元\n");
scanf("%c",&e); //輸入字元
if(e>='A'&&e<='Z')  //如果是A~Z
{ 
printf("Uppercase\n");//輸出這些字
}else if(e>='a'&&e<='z'){ //要是是a~z
printf("Lowercase\n");  //輸出這些字
}else if(e>='0'&&e<='9'){  //要是0~9
	printf("Digit\n");   //輸出這些字
}else{
	printf("E1B42 蘇翰庭\n");  //要是都不符合，就輸出這些字
}
system("pause");   //按一下走下一步
}
else {     //要是不符合密碼，走下列這些
	printf("SHIT\n");	//輸出這行字
	system("pause");  //按一下結束
}
return 0;
	
}

	//可以請老師線上測驗的作業可以出的仔細一點嗎？一直出錯欸...真的很多人跟我反應...
