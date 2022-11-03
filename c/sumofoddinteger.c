 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 23/01/2022
 * TIME    : 12:53 PM
 * PROJECT : SUM OF ODD INTEGER

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int n,i;
     n=0;

     for(i=1; i<200; i++)
     {
         if (i%2!=0)
         {
             printf("%d+",i);
             n+=i;
         }
     }
     printf("\n\nsum of odd integers:%d",n);

     printf("\n\n****thank you*****");

 return 0;    
 }