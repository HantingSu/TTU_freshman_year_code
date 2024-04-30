#include <stdio.h>
#include <string.h>
#define    SIZE1 40
#define    SIZE2 5
int main(void)
{
    char   x[]= "Happy New Year";
    char   y[SIZE1];
     char  z[SIZE2];

        //y[0]='a';
        y[3]='a';
        for(int n=0;n<SIZE1;n++){
        printf("Ascii code is %d This %c\n",y[n],y[n]);
        }
        printf("y=%s\nlength=%d\n",y,strlen(y));
        printf("x=%s\n y=%s\n",x, strcpy(y, x));
        strncpy(z, x, SIZE2-1);
        z[SIZE2-1]= '\0';
        printf("z=%s, length=%3d\n", z, strlen(z));
         return 0;
}
