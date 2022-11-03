/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 17/01/2022
 * TIME    : 6:49 PM
 * PROJECT : PROGUCT OF ODD INTEGERS

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int i,sum=1;
     printf("\nodd integers=  ");

     for(i=1; i<=15; ++i)
     {
         if(i%2!=0)
         {
             printf("%d\t",i);
             sum*=i;
         }
     }
     printf("\n\nsum=%d",sum);

     printf("\n\n\t****thank you*****");

 }
