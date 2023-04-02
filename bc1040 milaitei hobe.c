#include<stdio.h>
int main ()
{
    float a,b,c,d,e,ave;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    ave=( a*2+b*3+c*4+d)/(2+3+4+1);
    printf ("Media: %.1f\n",ave);
    if(ave>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if (ave>=5.0){
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        if( (ave+e/2.0)>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",(ave+e)/2.0);
    }
        else{
            printf("Aluno reprovado.\n");
        }
        return 0;


}
