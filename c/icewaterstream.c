/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 20/01/2022
 * TIME    : 4:05 PM
 * PROJECT : ICE WATER STREAMING PROGRAM

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     float temp;

     printf("\nenter a numerical integer:");
     scanf("%f",&temp);

     if(temp<0)
     {
         printf("\nICE");
     }
     else if (temp<=100)
     {
         printf("\nWATER");
     }

     else
     {
         printf("\nSTREAM");
     }
     printf("\n\n\t*****thank you*****");

  return 0;   
 }
