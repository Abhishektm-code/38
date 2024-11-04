#include<stdio.h>
int main()
{
    int a[10],n,i,greatest=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered array elements\n");
    for(i=0;i<n;i++)
        {
        printf("%d\n",a[i]);

        }
    greatest =a[0];
    for(i=0;i<n;i++)
        if(greatest<a[i])
    {
        greatest=a[i];
    }
    printf("the greatest is %d",greatest);
}
