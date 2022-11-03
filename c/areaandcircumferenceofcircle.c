/* "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 4:01  PM
 * PROJECT : AREA AND CIRCUMFERENCE OF CIRCLE

 */

 #include <stdio.h>
 #include <math.h>

int main()
{

    float r,b,a,c;

    printf("\nENTER THE RADIUS OF THE CIRCLE:");
    scanf("%f",&r);

  //formula for area of circle
    a=((22/7)*r*r);

  //formula for circumference of circle
    c=2*((22/7)*r); 

    printf("\nAREA OF CIRCLE:%.1f",a);
    printf("\n\nCIRCUMFERENCE OF CIRCLE:%.1f",c);

    printf("\n\n\t*****THANK YOU*****");

return 0;

}