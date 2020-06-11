#include <stdio.h>

int main()
{
    int i,j,k,sp=49;
    for(i=0;i<50;i++)
    {
        for(k=0;k<sp;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        { 
            printf("*");
        }
        sp--;
        printf("\n");
    }
    return 0;
}
