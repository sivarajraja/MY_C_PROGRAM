/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 17/01/2022
 * TIME    : 6:35 PM
 * PROJECT : SUM OF EVEN INTEGERS

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int i,sum;

     printf("the sum of even integers=  ");

     for(i=2; i<=30; ++i)
     {
         if(i%2==0)
         {
             sum+=i;

             printf("%d\t",i);
         }
     }
     printf("\n\nsum=%d",sum);
     printf("\n\n\t*****thank you*****");

  return 0;   
 }
