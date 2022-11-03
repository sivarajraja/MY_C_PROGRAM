 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/02/2022
 * TIME    : 8:04 PM
 * PROJECT : CHECK GETS() & PUTS() USING STRING

 */

 #include<stdio.h>

 int main()
 {
     char fn[15];
     char n[15];

     printf("\nENTER YOUR FULL NAME:");
     scanf("%s",&fn);

     printf("\nENTER YOUR FULL NAME:");
     gets(n);

     printf("\nYOUR NAME IS: %s",fn);
     printf("\nYOUR NAME IS: %s"n);

     puts(fn);
     
     puts(n);

 return 0;
 }