 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/02/2022
 * TIME    : 6:00 PM
 * PROJECT : DIFFERENT STRING FUNCTION

 */

 #include<stdio.h>
 #include<string.h>

 int main()
 {
     char n1[11]={"shiva"};
     char n2[11];
     char n3[11]={"SHIVA"};

     strcpy(n2,n1);

     printf("\nSTRING LENGTH=%d",strlen(n1));
     printf("\nSTRING COPY=%s",n2);
     printf("\nSTRING UPPER=%s",strupr(n1));
     printf("\nSTRING LOWER=%s",strlwr(n3));
     printf("\nSTRING REVERSE=%s",strrev(n1));
     

 return 0;    
 }