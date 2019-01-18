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
    int sum = 0;
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
            printf("shuruxingming\n");
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

        if (code == 2)
        {
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
            printf("xianshichengji\n");
            for (int i = 0; i < index; i++)
            {
                printf("%d %s %d %d %d\n", i + 1, sss[i].name, sss[i].yuwen, sss[i].shuxue, sss[i].yingyu);
            }
            printf("sss\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            for (int i = 0; i < index; i++)
            {
                sum = sss[i].yuwen + sss[i].shuxue + sss[i].yingyu;
                if (sum < 180)
                {
                    printf("%d %s\n", i + 1, sss[i].name);
                }
            }
            printf("dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            for (int i = 0; i < index; i++)
            {
                if ((sss[i].yuwen && sss[i].shuxue && sss[i].yingyu) < 60)
                {
                    printf("dianjihuichujixu:\n");
                }
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 6){

        }
        if (code == 7)
        {
        }
    }
    return 0;
}
