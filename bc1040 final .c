#include<stdio.h>
int main()
{
    float a,b,c,d,e,Media;
    scanf("%f %f %f %f", &a,&b,&c,&d);
    Media = (a*2+b*3+c*4+d*1)/(2+3+4+1);
    printf("Media: %.1f\n", Media);

    if(Media>=7.0){
        printf("Aluno aprovado.\n");
    }

    else if(Media>=5.0){
        printf("Aluno em exame.\n");

        scanf("%f", &e);

        printf("Nota do exame: %.1f\n", e);

        if(e + Media/2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", (Media+e)/2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
