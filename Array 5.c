#include<stdio.h>
int main()
{
    int num[]={12,332,22,224,43,33};
    int value,pos=-1,i;
    printf("Enter the value you want to search:");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
           pos=i+1;
           break;
        }
    }
        if(pos==-1)
        {
            printf("The value not found");
        }
        else
            {
            printf("The value is found at position %d",pos);
            }
        return 0;

}
