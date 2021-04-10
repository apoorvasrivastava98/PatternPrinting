#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char s[10]="APOORVA";
    for(i=0; i<strlen(s); i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%c",s[j]);
    }

        printf("\n");
    } 
    return 0;
}


OUTPUT-

A                                                                                                                                                                            
AP                                                                                                                                                                           
APO                                                                                                                                                                          
APOO                                                                                                                                                                         
APOOR                                                                                                                                                                        
APOORV                                                                                                                                                                       
APOORVA
