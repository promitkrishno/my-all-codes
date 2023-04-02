#include<stdio.h>
int main ()
{
    int a=1,b;
    b=(++a + a++) + ++a;
    printf("output %d",b);
    return 0;


}
