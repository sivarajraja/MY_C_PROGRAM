 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 24/01/2022
 * TIME    : 8:03 PM
 * PROJECT : PRINT PYRAMID PATTERN

 */

#include<stdio.h>

int main()
{
    int n;
    int i,j,k,a;

    printf("\nenter a value:");
    scanf("%d",&n);

    for(i=1; i<=n; ++i)
    {
        //print in new line
        printf("\n");

        for(j=1; j<=n-i; ++j)
        {
             //print spaces in pattern
             printf(" ");
        }

        for(j=i, k=1; k<=i; ++k)
        {
            //printing star pyramid pattern
            printf("* ");
        }

    }

return 0;    
}