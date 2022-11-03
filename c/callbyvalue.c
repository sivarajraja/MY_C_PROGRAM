 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 08/02/2022
 * TIME    : 8:21 AM
 * PROJECT : CALL BY VALUE METHOD

 */

 #include<stdio.h>
 
 void swap(int,int);

 int main()
 {
     int a,b;
     a=11;
     b=22;
     printf("\nvalue before swap: a=%d  b=%d",a,b);
     swap(a,b);

 }

 void swap(int a,int b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;
     printf("\nvalue after swap: a=%d  b=%d",a,b);
 }