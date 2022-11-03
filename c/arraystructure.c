 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 04/02/2022
 * TIME    : 6:45 PM
 * PROJECT : USING ARRAY IN STRUCTURE

 */

 #include<stdio.h>
 #include<string.h>

 struct student
     {
         char name[11];
         int roll;
     };

 int main()
 {
    
     int i,j;
     struct student n[3];

     printf("\nENTER STUDENT INFORMATION\n");

     for(i=0; i<3; ++i)
     {
         printf("\nENTER STUDENT NAME:");
         scanf("%s",&n[i].name);

         printf("\nENTER STUDENT ROLL NO:");
         scanf("%d",&n[i].roll);
     }

    printf("\n\nSTUDENT NAME        ROLL NO\n");

     for(j=0; j<3; ++j)
     {
         strupr(n[j].name);

         printf("\n  %s               %d\n",n[j].name,n[j].roll);
     }

 return 0;    
 }