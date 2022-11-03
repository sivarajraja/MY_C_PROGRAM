/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 19/01/2022
 * TIME    : 8:26 AM
 * PROJECT : STRING ANALYSIS

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     char n[80];
     int ac,ic,nic,wsc,oc;
     int i,c;

     ac=ic=wsc=nic=oc=0;

     printf("\nenter a text:\t");
     gets(n);
     
     for(i=0; n[i]!='\0'; ++i)
     {
         c=n[i];

         if(c>='0' && c<'9')
         {
             ic++;
         }

         else if((c>='A' && c<='Z') || (c>='a' && c<='z'))
         {
             ac++;
         }

         else if (c==' ' || c=='\n' || c=='\t')
         {
             wsc++;
         }

         else
         {
             ++oc;
         }
     }

     printf("\n\nSTRING ANALYSIS-CHARACTER");
     printf("\ncharacter   =%d",ac);
     printf("\nnumbers     =%d",ic);
     printf("\nnegative    =%d",nic);
     printf("\nwhitespace  =%d",wsc);
     printf("\nothers      =%d",oc);

     printf("\n\n\t*****thank you*****");

 return 0;
 }
