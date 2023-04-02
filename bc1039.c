#include <stdio.h>
#include <math.h>
int main ()
{
     float x,y;
    scanf("%f %f",&x,&y);
    if(x==1){
        printf("Total: R$ %.2f",(4.00*y));}
        else if(x==2){
        printf("Total: R$ %.2f",(4.50*y));}
        else if(x==3){
        printf("Total: R$ %.2f",(5.00*y));}
        else if(x==4){
        printf("Total: R$ %.2f",(2.00*y));}
        else if(x==5){
        printf("Total: R$ %.2f",(1.50*y));}
        return 0;
}
