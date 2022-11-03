/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 23/01/2022
 * TIME    : 8:41 AM
 * PROJECT : FIND PRIME NUMBER

 */

#include<stdio.h>
#include<math.h>

int main()
{
    long n,pc,npc;
    int i,j;
    int prime;

    n=pc=npc=0;

    while (n<100)
    {
        ++n;
        prime=1;
        j=sqrt(n);

        for (i=2; i<=j; i++)
        {
            if (n%i==0)
            {
               prime=0;
               break;   
            }
        }

        if (prime==1)
        {
           printf("\n%d is prime",n);
           pc++;
        }

        else
        {
            printf("\n%d is not prime",n);
            npc++;
        }

    }

    printf("\n%d prime number",pc);
    printf("\n%d non prime number",npc);

return 0;
}