#include<stdio.h>

double my_fun(int n);

int main(){

    int e=1;
    double n=1;

    printf("%f\n",my_fun(5));
    printf("%f\n",my_fun(8));
    printf("%f\n",my_fun(10));
    for(int c=1;n>0.00001;c++){
    n=(my_fun(c+1)-my_fun(c));
    e++;
    }
    printf("do %d time\n",e);
return 0;
}

double my_fun(int n){
   double a=0,sig=0,mlt=1;
    for(int j=1;j<=n;j++){
        mlt=mlt*j;
        a=1/mlt;
        sig=sig+a;
    }
    return sig;
}
