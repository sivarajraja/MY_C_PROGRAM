/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 20/01/2022
 * TIME    : 4:33 PM
 * PROJECT : REVERSE STRING PRINTING

 */

 #include <stdio.h>
 #include <conio.h>

 int main()
 {
     char text[80];
     char rtext[80];
     int i,j;

     printf("\nenter the character name:");
     gets(text);

     printf("\nforward letter:\t");

     for(i=0; text[i]!='\0'; i++)
     {
         //i will assign this loop for find a last number
         // i will assing a loop as empty
         printf("%c",text[i]);
     }
     for(--i,j=0; i>=0; --i,++j)
     {
         rtext[j]=text[i];
     }

     rtext[j]='\0';

     printf("\nbackward letter:%s",rtext);
     printf("\n\n\t*****thank you*****");


  return 0; 
 }