 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 25/01/2022
 * TIME    : 7:57 PM
 * PROJECT : FIND PI VALUE

 */

#include<stdio.h>

int main()
{
    int i,j;
    float sign,pi;
    pi=0;
    sign=1;

    printf("\nSNO   PI VALUE");

    for(i=1, j=1; j<=100; i+=2, ++j)
    {
        pi=pi+(4.0/i)*sign;

        printf("\n%-3d    %.3f",j,pi);

        sign*=-1;
    }

 return 0;   
}