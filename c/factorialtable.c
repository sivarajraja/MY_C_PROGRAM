/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 18/01/2022
 * TIME    : 4:53 PM
 * PROJECT : FACTORIAL TABLE

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     long fact=1;
     int i=1,n;

     printf("\nenter the no of times (1 - 20):");
     scanf("\t%d",&n);

     printf("\n\n\tN VALUE\t\tFACTORIALS\n");

     while(i<=n)
     {
         fact*=i;
         printf("\n\t%-7d\t\t%ld",i,fact);
         ++i;
     }

     printf("\n\n\t*****thank you*****");

  return 0;

 }
