/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/01/2022
 * TIME    : 10:10 AM
 * PROJECT : FIND THE SIZE OF PAPER

 */

#include <stdio.h>
#include <math.h>

int main()
{
    int l,w,i,n;
    
    l=1189;
    w=841;
    n=1189;
    i=0;

    for (i=0;i<9; i++)
    {
        printf("\n\nA%d PAPER HAS DIMENSION  %dmm  x  %dmm",i,l,w);

        l=w;
        w=n/2;
        n=l;
    }

printf("\n\n\t******THANNK YOU******");    

   return 0; 
}
