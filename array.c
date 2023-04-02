#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<=3;i++)
    {
        printf("enter the element number %d :",i+1);
        scanf ("%d",&a[i]);
    }
    printf("%d",a[2]);
}
