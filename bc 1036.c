#include <stdio.h>
int main()
{
    double a;
    scanf("%lf enter the number = ",a);
    if(a>=0&&a<=25){
        printf("%.4lf Intervalo [0,25]");
        if (a>25&&a<=50){
            printf("%.5lf Intervalo (25,50]");
            if (a>50&&a<=75){
                printf("%,5lf Intervalo (50,75]");
                if(a>75&&a<=100){
                    printf("%.5lf Intervalo (75,100]");
                }
            }

        }

    }
      else printf("Fora de intervalo");
return 0;
}

