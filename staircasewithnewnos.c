#include <stdio.h>

int main()
{
    int i,j,k,sp=9;
    for(i=0;i<10;i++)
    {
        for(k=0;k<sp;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",i);
        }
        sp--;
        printf("\n");
    }

    return 0;
}
