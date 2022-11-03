/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 02/01/2022
 * TIME    : 7:31 PM
 * PROJECT : BREAK STATEMENT

 */

 #include <stdio.h>

int main()
{
    int i=0;
    
    while (i<=11)
    {
       printf("\n%d",i);
       ++i; 
       if (i==9)
       {
            break; 
       } 
    }
    
printf("\n\n\t*****THANK YOU*****");
printf("\nFINAL VALUE OF i=%d\nWHILE BREAK STATEMENT APPLY",i);
return 0;    
}