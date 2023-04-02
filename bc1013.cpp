#include <stdio.h>

    int main()
    {
         int a, b, c, ;
         scanf("%d %d %d", &a, &b, &c);

         if(a < b || a < c){
             if(b < c){
             printf("%d eh o maior\n", c );
             }
         else{
               printf("%d eh o maior\n", b );
            }
        }
        else
        printf("%d eh o maior\n", a);
        return 0;
    }
