#include <stdio.h>
 #include <stdlib.h>
  #define LEN 5
  int main(void)
  {
 	     int i, *ptr1, *ptr2; //宣告變數與指標
 	     int num[LEN] = {10, 20, 30, 40, 50};//指定初值
 
 	      /* 顯示陣列元素的位址和值*/
 	     for ( i = 0; i < LEN; i++ ) {
 		            ptr1= &num[i]; /* 取得元素的位址*/
 		            printf("num[%d]=%3d(%p)\n", i, *ptr1, ptr1);
 		      }
 		      ptr1= num; /* 陣列名稱就是指標*/
 		     for (i=LEN; i >=1; i-- ) {
               ptr1+=(i-1);  //4,3,2,1,0  because array name is his address 
 			           printf("第%d個元素值: %d(%p)\n", i, *ptr1,ptr1);
 			           // ptr1--;
                       ptr1= num;

 			      }
 			      system("PAUSE");
 			      return 0;
 			}
