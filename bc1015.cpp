#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf", &a,&c,&b,&d);
    e=(((b-a)*(b-a)) + ((d-c)*(d-c)));

    printf("%.4lf\n",pow(e, .5)); //    printf("%.4lf\n",sqrt(e);

    return 0;

}
