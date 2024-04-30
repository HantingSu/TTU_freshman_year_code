#include<stdio.h>

int main()
{
    int score1, score2, number;
    float sum;
    char name[10];
    printf("輸入名字和座號\n");
    scanf("%s %d", name, &number);
    printf("期中考和期末考分別考多少分？\n");
    scanf("%d %d", &score1, &score2);
    sum = ((float)score1+(float)score2)/2;
    printf("我是\"%s\"，我\'%d\'號\n", name, number);
    printf("我期中考、期末考分別考%d分和%d分\n", score1, score2);
    printf("我總成績為%2.1f分\n", sum);
    
    if(sum >=0 && sum <60){
        if(sum>=0 && sum <50){
            printf("哇！你好可憐喔！明年見啦！幫你上香\\|/ \n");
        }else
           printf("我們說不定明年見不到了，但請準備補考！\n");
    }
    else if(sum >=60 && sum <= 100){
        printf("恭喜你及格了！看來明年你會去更好的地方...\n");
    }
return 0;

}


