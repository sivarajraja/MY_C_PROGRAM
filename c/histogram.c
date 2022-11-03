/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 5:07 PM
 * PROJECT : HISTOGRAM PROGRAM

 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j;
     printf("\nenter the five (5) numbers in a single line with spaces:\t");
     
     for(i=1; i<=5; ++i)
     {
        scanf("%d",&n);

        //print user entered number
        printf("\n%-d",n);

        //print the star pattern
        for(j=1; j<=n; ++j)
           printf("\t*");
     
     }
     printf("\n\n\t*****thank you*****");

 return 0;

}
