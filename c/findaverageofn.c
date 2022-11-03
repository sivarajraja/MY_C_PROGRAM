/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 16/01/2022
 * TIME    : 10:26 PM
 * PROJECT : FIND AVERAGE OF N

 */

#include <stdio.h>

int main()
{
    int n,i;
    float a,num;
    float sum=0;

    printf("\nenter the number:");
    scanf("%d",&n);

    printf("\nenter the number one by one:");
    i=1;
    while(i<=n)
    {
        scanf("%f",&num);
        sum=sum+num;
        i++;
    }

    printf("\nsum=%.2f\naverage=%.2f",sum,sum/n);
    printf("\n\n\t*****thank you*****");

 return 0;   
}