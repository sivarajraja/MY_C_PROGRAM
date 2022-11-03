 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/02/2022
 * TIME    : 6:32 PM
 * PROJECT : COMPARE STRING FUNCTION

 */

 #include<stdio.h>
 #include<string.h>

 int main()
 {
     char n1[11]={"shiva"};
     char n2[11]={"SHIVA"};
     char c=stricmp(n1,n2);

     if(c==0)
        printf("\n THIS STRING ARE SAME");

     else if(c==1)
        printf("\nTHIS STRING ARE NOT SAME");

 return 0;       
 }