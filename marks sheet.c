#include<stdio.h>
int main()
{
    int marks;
    printf ("enter the number ; ");
    scanf("%d",&marks);
    if(marks>=0 && marks <=40){
        printf("fail\n");}
        else if (marks>40 && marks<=100){
            printf ("pass\n");}
            else{
                printf ("wrong number");
                }
                return 0;
}
