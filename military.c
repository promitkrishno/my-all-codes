#include<stdio.h>
int main()
{
    int ID; // the last two digit of your Id
    scanf("%d", &ID); // the last two digit of your Id
    ID = (ID%3) + 3;
    while(ID--)
    {
        for(int hello = 1; hello < 5; hello*=2)
        {
            if(ID%2 == 0) continue;
            printf("!Double Trouble without break!\n");
        }
        if(ID%2 ==1) printf("\tKi hoitese kisui bujhtesi na.\t...");
    }
    return 0;
}
