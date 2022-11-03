/* "hello"

 * AUTHOR  : SHIVA
 * DATE    : 01/01/2022
 * TIME    : 3:33 PM
 * PROJECT : AREA AND PERIMETER OF RECTANGLE

 */

 #include <stdio.h>
 #include <math.h>

 int main()
{
      float l,w,a,p;

      printf("\nENTER THE LENGTH OF A RECTANGLE:");
      scanf("%f",&l);

      printf("\nENTER THE WIDTH OF A RECTANGLE:");
      scanf("%f",&w);

    //formula for area of rectangle
      a=(l*w);

    //formula for perimeter of rectangle
      p=(2*a);

      printf("\nAREA OF RECTANGLE:%.1f",a);
      printf("\n\nPERIMETER OF RECTANGLE:%.1f",p);

      printf("\n\n\t*****THANK YOU*****");

 return 0;

}