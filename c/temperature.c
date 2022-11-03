/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 19/01/2022
 * TIME    : 4:02 PM
 * PROJECT : FIND TEMPERATURE

 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int flag;

    printf("\nenter a value between (1-3):");
    scanf("%d",&flag);

    switch(flag)
    {
        case 1: 
                 printf("\n HOT");
                 break;

        case 2:
                 printf("\n LUKE WARM");
                 break;

        case 3:
                 printf("\n COLD");
                 break;

         default:
                 printf("\nOUT OF RANGE");                          
    }

    printf("\n\n\t*****thank you*****");

 return 0;   
}