#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum= %d\n",sum);
    printf("average= %.2lf\n",(float)sum/n);
    return 0;
}
