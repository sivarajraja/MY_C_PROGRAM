 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 06/02/2022
 * TIME    : 2:57 PM
 * PROJECT : FUNCTIONS IN C

 */

#include<stdio.h>

void name ();
int main()
{
    int i=0;
    while(i<11)
    {
    name ();
    ++i;
    }

return 0;
}

void name ()
{
    printf("\nHEY SHIVA!");
}