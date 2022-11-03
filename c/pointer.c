 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 31/01/2022
 * TIME    : 7:31 PM
 * PROJECT : POINTER (FIND ADDRESS OF VALUE)

 */

#include<stdio.h>

int main()
{
    int a=11;
    int *p;
    p=&a;

    printf("\n%d",a);
    printf("\n%d",&a);
    printf("\n%d",p);
    printf("\n%d",*p);
    printf("\n%d",++*p);
    printf("\n%d",--*p);
    printf("\n%u",p);

 return 0;   
}