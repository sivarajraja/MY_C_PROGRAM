 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 31/01/2022
 * TIME    : 7:02 PM
 * PROJECT : 2 DIMENSIONAL ARRAY

 */

 #include<stdio.h>

 int main()
 {
     int i,j;
     long int a[4][3]={{1,2,3},{5,6,7},{9,0,1},{2,3,4}};

     for(i=1; i<=4; ++i)
     {
         for(j=1; j<=3; ++j)
         {
         printf("A(%d)(%d)= %ld\n",i,j,a[i][j]);
         }
     }

 return 0;    
 }
