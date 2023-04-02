#include<stdio.h>
int main()
{
    int d,o;
    scanf("%d",&d);
    printf("%d ano(s)\n",d/365);
    o=d%365;
    printf("%d mes(es)\n",o/30);
    o=o%30;
    printf("%d dia(s)\n",o);


}
