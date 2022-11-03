/*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 08/02/2022
 * TIME    : 8:43 AM
 * PROJECT : DECENDING ORDER

 */

 #include<stdio.h>

 int main()
 {
     int a[5]={'7','4','1','3','9'};
     int i,j,k=0;

     for(i=0; i<5; +i)
     {
         for(j=i+1; j<4; ++j)
         {
             if(a[i] > a[j])
             {
                 k=a[i];
                 a[i]=a[j];
                 a[j]=k;
             }
         }

       printf("\ndecending order:%d",a[i]);  
     }
 }