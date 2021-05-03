#include <stdio.h>
int main()
{
    int n,i,j,sp;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    sp=n;
    for(i=0;i<n;i++)
    {
     for(j=0;j<sp;j++)
     {
         printf(" ");
     }
     for(j=0;j<=i;j++)
     {
         printf("*");
     }
     for(j=i-1;j>=0;j--)
     {
         printf("*");
     }
     sp=sp-1;
     printf("\n");
    }
    return 0;
}

OUTPUT-
Enter the value of n 5
     *
    ***
   *****
  *******
 *********
