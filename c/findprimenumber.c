/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 8:26 PM
 * PROJECT : FIND PRIME OR NOT PRIME NUMBER

 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
     int i,n,number=1;

     printf("\nENTER A NUMBER TO FIND PRIME OR NOT PRIME:");
     scanf("%d",&n);

     for(i=2;i<=sqrt(n);++i)
     {
        if(n%i==0)
         {
             number=0;
             break;
         }
     }
     if(n==1)
         printf("\n\n%d IS NEITHER PRIME NOT COMPOSITE NUMBER",n);

     else
     {
         
     if(number==1)
         printf("\n\n%d IS PRIME NUMBER",n);

     else
         printf("\n\n%d IS NOT PRIME NUMBER",n);
     }

printf("\n\n\t*****THANK YOU*****");

return 0; 
 }
