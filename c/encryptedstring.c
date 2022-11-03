/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 17/01/2022
 * TIME    : 10:30 AM
 * PROJECT : ENCRYPTED STRING

 */

 #include <stdio.h>
 #include <conio.h>

 int main()
 {
     char name[80];
     int i;

     printf("\nenter the string:\t");
     gets(name);

     for(i=0; name[i]!='\0'; i++)
     {
         name[i]-=1;
     }

     printf("\nencrypted string=\t%s",name);

     printf("\n\n\t*****thank you*****");

   return 0;  
 }
