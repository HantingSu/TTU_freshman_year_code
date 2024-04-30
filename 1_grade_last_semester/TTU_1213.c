#include<stdio.h>

int main()
{
    int quiz, mid, fin;
    float score;
printf("Enter your quiz score, mid score, fin score\n");
scanf("%d %d %d", &quiz, &mid, &fin);

score = quiz*0.3 + mid*0.3 + fin*0.4;
if(score >= 0 && score <= 100){
    printf("Score=%2.2f\n", score);
    if(score >= 60){
        printf("及格\n");
    }
    else if(score < 60 && score >= 0){
        printf("不及格\n");
    }
}
else {
    printf("ERROE\n");
}
return 0;
}
