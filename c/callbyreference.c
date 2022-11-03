/*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 08/02/2022
 * TIME    : 8:32 AM
 * PROJECT : CALL BY REFERENCE METHOD

 */

 #include<stdio.h>

 void swap(int*,int*);

 int main()
 {
     int a,b;
     a=11;
     b=22;
     swap(a,b);
     printf("\nvalue before swap: a=%d  b=%d",a,b);
 }

 void swap(int*a,int*b)
 {
     int temp;

     temp=&a;
     a=&b;
     b=&temp;

     printf("\nvalue after swap: a=%u  b=%u",a,b);
     
 }