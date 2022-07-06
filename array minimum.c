#include<stdio.h>

int main()

{
    int a[100],n,i;

    printf("how many numbers?  ");
    scanf("%d",&n);

    for (i=0;i<n;i++)

    {
        scanf("%d",&a[i]);

    }

     int min = a[0],max=a[0];

    for (i=1;i<n;i++)

    {
        if(min>a[i])

        min=a[i];
        if(max<a[i])
            max=a[i];

    }

    printf("the minimum number is   %d",min);
    printf("the maximum number is   %d",max);
    return 0;




}
