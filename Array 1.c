#include<stdio.h>
int main()
{
    int i,marks[5];
     for(i=0;i<=4;i++)
     {
         scanf("%d",&marks[i]);
     }

    for(i=0;i<=4;i++)
    {
        printf("marks:%d\n",marks[i]);
    }
    return 0;
}
