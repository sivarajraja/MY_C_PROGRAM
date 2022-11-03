/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 17/01/2022
 * TIME    : 10:44 AM
 * PROJECT : DISPLAY ASCII VALUE

 */

#include <stdio.h>
#include <conio.h>

int main()
{
    char name[80];
    int i;

    printf("\nenter the name of string:");
    gets(name);

        printf("\nname\t    \tASCII value\n");

    for(i=0; name[i]!='\0'; ++i)
    {
        printf("\n  %c\t   =\t     %d\n",name[i],name[i]);
    }

    printf("\n\n\t*****thank you*****");

return 0;  

}