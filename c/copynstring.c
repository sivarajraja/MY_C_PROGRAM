 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/02/2022
 * TIME    : 6:43 PM
 * PROJECT : COPY N NUMBER OF STRING FUNCTION

 */

 #include<stdio.h>
 #include<string.h>

 int main()
 {
     char n1[11]={"shiva"};
     char n2[11];
     char n=4;

     strncpy(n2,n1,n);

     puts(n2);

 return 0;    
 }