#include<stdio.h>
int main()
{
    int i,j,n,g,r[j];
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &g);
        int r[g];
        for(j=0;j<g;j++){
            scanf("%d", r[j]);
        }
        for(j=0;j<g;j++){
            if(r[g]==r[j]){
                r[g]=r[j];

            }
        }
        printf("%d", r[j]);
    }

}


