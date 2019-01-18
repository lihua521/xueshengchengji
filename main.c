#include <stdio.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
int main()
{
    struct Student sss[1000];
    int index = 0;
    printf("xueshengchengjixitong\n");
    while (1)
    {
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---xianshi\n");
        printf("4---yewu1\n");
        printf("5---yewu2\n");
        printf("6---yewu3\n");
        printf("7---yewu4\n");
        printf("shurugongneng\n");

        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("1---shuruxingming\n");
            scanf("%s", sss[index].name);
            printf("shuruyuwenchengji\n");
            int yuwen;
            scanf("%d", &yuwen);
            sss[index].yuwen = yuwen;
            int shuxue;
            scanf("%d", &shuxue);
            sss[index].shuxue = shuxue;
            int yingyu;
            scanf("%d", &yingyu);
            sss[index].yingyu = yingyu;
            index++;
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2){
            if (index > 0)
            {
                index--;
                printf("shanchuchengong,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("shanchushibai,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }

        }
        if (code == 3)
        {
           
    }
    if (code == 4)
    {
    }
    if (code == 5)
    {
    }
    if (code == 6)
    {
    }
    if (code == 7)
    {
    }
    return 0;
}
}