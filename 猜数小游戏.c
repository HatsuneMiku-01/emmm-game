#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"
int main()
{
    int g,r,j;
    j=0;
    time_t t;
    srand((unsigned)time(&t));
    r =rand()%100;
    printf("欢迎试试我无聊编写的一个小小猜数游戏哦\n");
    printf("请输入你说猜的数，1-100哦\n");
    scanf("%d",&g );
    while (g!=r ) {
        if (g>r) {
            printf("你输入的数大了欸\n");
        }else {
            printf("你输入的数小了欸\n");
        }
        j++;
        printf("请再试试哦\n");
        scanf("%d",&g );
    }
    printf("正确的数是%d\n",r );
    printf("你一共输入了%d次哦\n",j );
    switch (j ) {
        case 1:
            printf("斯国一\n");
        case 2:
            printf("厉害呐\n");
            break;
        case 3:
            printf("还阔以\n");
        case 4:
            printf("emmm,还阔以");
            break;
        case 5:
            printf("你要努力了，小傻瓜\n");
        case 6:
            printf("你要努力了，小傻瓜\n");
        case 7:
            printf("你要努力了，小傻瓜\n");
            break;
        case 8:
            printf("要不我们放弃吧，这不适合你QAQ");
        case 9:
            printf("哇，心疼\nQAQ");
        case 10:
            printf("哇，心疼\nQAQ");
            
    }
    return 0;
}
