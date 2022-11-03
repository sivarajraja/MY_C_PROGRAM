 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 09/02/2022
 * TIME    : 11:36 AM
 * PROJECT : RECURSION FUNCTION

 */

 #include<stdio.h>

void rev(int);

 int main()
 {
     rev(11);

  return 0;   
 }

 void rev(int r)
 {
     if(r<1)
     {
     printf("\nENDED!");
     }

     else
     {
         printf("\n%d",r);
         r-=1;
         rev(r);
     }

 }