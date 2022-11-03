/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 22/01/2022
 * TIME    : 5:33 PM
 * PROJECT : FIBONACCI SERIES

 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int i;
    int f1,f2,f3;

    f1=f2=1;

    printf("\nenter how many numbers:");
    scanf("%d",&n);

    printf("\n%d %d ",f1,f2);

    for (i=3; i<=n; ++i)
    {
        f3=f1+f2;

        printf("%d ",f3);

        f1=f2;
        f2=f3;
    }
    printf("\n\n\t*****thank you*****");

 return 0;   
}