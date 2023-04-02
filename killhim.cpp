#include<stdio.h>
int main()
{
    int w,d1,d2,d3,m;
    scanf("%d %d %d %d %d", &w,&d1,&d2,&d3,&m);
    if(w*d1==m){
        printf("Will Marry 1st Daughter\n");
    }
    else if(w*d2==m){
        printf("Will Marry 2nd Daughter\n");
    }
    else if(w*d3==m){
        printf("Will Marry 3rd Daughter\n");
    }
    else{
        printf("Kill Him!\n");
    }
    return 0;
}
