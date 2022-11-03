/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 5:38 PM
 * PROJECT : FIND SMALLER NUMBER

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int i,n,j;

     printf("\nenter five 5 numbers in single line with spaces:");

     for(i=1; i<=5; ++i)
     {
            scanf("%d",&n);

            if(i==1 || j>n)
             j=n;
     }

     printf("\nsmallest number=%d",j);

     printf("\n\n\t*****thank you*****");

 return 0;
 }