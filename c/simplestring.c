 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 31/01/2022
 * TIME    : 8:07 PM
 * PROJECT : PRINT SIMPLE STRING

 */

 #include<stdio.h>

 int main()
 {
     char a[10]={'s','h','i','v','a','\0'};
     char b[10]="shiva";
     char *p=a;

     printf("\n1.%s",a);
     printf("\n2.%s",b);
     printf("\n3.%d",*p);
     printf("\n4.%d",p);
     printf("\n5.%d",&a);
     printf("\n6.%d",&b);

 return 0;    
 }