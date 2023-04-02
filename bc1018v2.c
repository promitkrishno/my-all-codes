#include<stdio.h>
int main()
{
    int taka,o;
    scanf("%d",&taka);
    printf("%d\n",taka);
    printf("%d nota(s) de R$ 100,00\n",taka/100);
    o=(taka%100);
    printf("%d nota(s) de R$ 50,00\n",o/50);
    o=(o%50);
    printf("%d nota(s) de R$ 20,00\n",o/20);
    o=(o%20);
    printf("%d nota(s) de R$ 10,00\n",o/10);
    o=(o%10);
    printf("%d nota(s) de R$ 5,00\n",o/5);
    o=(o%5);
    printf("%d nota(s) de R$ 2,00\n",o/2);
    o=(o%2);
    printf("%d nota(s) de R$ 1,00\n",o/1);


    return 0;
}
