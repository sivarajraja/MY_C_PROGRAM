/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 19/01/2022
 * TIME    : 4:11 PM
 * PROJECT : FIND COLOUR ANALYSIS

 */

#include <stdio.h>
#include<conio.h>

int main()
{
    char colour;

    printf("\nenter the colour name as (RGB):");
    colour = getchar();

    switch(colour)
    {
        case 'r':
        case 'R':
                   printf("\nRED");
                   break;

        case 'g':
        case 'G':

                   printf("\nGREEN");
                   break;

        case 'b':
        case 'B':

                   printf("\nBLUE");
                   break;

        default:

                   printf("\nBLACK");                                 
    }

    printf("\n\n\t*****thank you*****");

 return 0;   
}