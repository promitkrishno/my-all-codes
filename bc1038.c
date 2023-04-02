#include <stdio.h>
int main ()
{
     int X,Y;
     float t = 0;
     scanf("%d %d",&X,&Y);
     if(X==1){
        t = (float)(4.00*Y);
     }
     else if(X==2){
        t = (float)(4.50*Y);
     }
     else if(X==3){
        t = (float)(5.00*Y);
     }
     else if(X==4){
        t = (float)(2.00*Y);
     }
     else if (X==5){
        t = (float)(1.50*Y);
     }
     printf("Total: R$ %.2f\n",t);
        return 0;
}
