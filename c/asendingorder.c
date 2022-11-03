 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 06/02/2022
 * TIME    : 9:10 PM
 * PROJECT : ASENDING ORDER  IN C

 */

 #include<stdio.h>

 int main()
 {
     int num[6]={'8','4','3','1','5','9'};
     int i,j,k=0;

     for(i=0; i<6; ++i)
     {
         for(j=i+1; j<5; ++j)
         {
             if(num[i]>num[j])
             {
                 k=num[i];
                 num[i]=num[j];
                 num[j]=k;
             }
         }
     printf("\n%d",num[i]);
     }

 return 0;    
 }