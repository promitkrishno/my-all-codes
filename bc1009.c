#include<stdio.h>
int main ()
{
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    printf("TRIANGULO: %.3f", .5*a*c);
    printf("CIRCULO: %.3f", 3.14159*c*c);
    printf("TRAPEZIO: %.3f", .5*(a+b)*c);
    printf("QUADRADO: %.3f", b*b);
    printf("RETANGULO: %.3f", a*b);
    return 0;



}
