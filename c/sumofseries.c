/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 16/01/2022
 * TIME    : 10:11 AM
 * PROJECT : SUM OF SERIES

 */
 
 #include<stdio.h>

 int main()
 {
     long sum=0;
     int i,n;

     printf("\nenter the number of times");
     scanf("%d",&n);

     for ( i=1; i<=n; ++i)
     {
         sum=sum+i;
     }
     printf("\nsum=%d",sum);
     printf("\n\n\t*****thankyou*****");

  return 0;     
 }
