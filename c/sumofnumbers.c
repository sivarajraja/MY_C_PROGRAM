/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 6:20 PM
 * PROJECT : SUM OF NUMBERS IS DIVISIBLE BY 5

 */

 #include <stdio.h>
 #include <conio.h>

 int main()
 {
     int i;
     int sum=0;

     for(i=2; i<=100; i+=3)
     {
        if(i%5==0)
        {
            sum+=i;
        }
     }

     printf("\nsum= %d",sum);
     printf("\n\n\t*****thank you*****");

  return 0;    
 }
