 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 03/02/2022
 * TIME    : 8:14 PM
 * PROJECT : USING STRUCTURE IN C

 */

 #include<stdio.h>
 #include<string.h>
 
 struct student
     {
         char name[11];
         int roll,mark;
     };

 int main()
 {
     int i;

     struct student s1,s2,s3;

     printf("\nENTER A FIRST STUDENT NAME:");
     gets(s1.name);
     printf("\nENTER A FIRST STUDENT ROLL NO:");
     scanf("%d",&s1.roll);
     printf("\nENTER A FIRST STUDENT MARK:");
     scanf("%d",&s1.mark);

     printf("\nENTER A SECOND STUDENT NAME:");
     scanf("\n%s",&s2.name);
     printf("\nENTER A SECOND STUDENT ROLL NO:");
     scanf("%d",&s2.roll);
     printf("\nENTER A SECOND STUDENT MARK:");
     scanf("%d",&s2.mark);

     printf("\nENTER A THIRD STUDENT NAME:");
     scanf("%s",&s3.name);
     printf("\nENTER A THIRD STUDENT ROLL NO:");
     scanf("%d",&s3.roll);
     printf("\nENTER A THIRD STUDENT MARK:");
     scanf("%d",&s3.mark);

     strupr(s1.name);
     strupr(s2.name);
     strupr(s3.name);
    
     printf("\n\nNAME OF THE STUDENT:%s",s1.name);
     printf("\n\nROLL NO OF A STUDENT:%d",s1.roll);
     printf("\n\nMARK OF A STUDENT:%d",s1.mark);

     printf("\n\nNAME OF THE STUDENT:%s",s2.name);
     printf("\n\nROLL NO OF A STUDENT:%d",s2.roll);
     printf("\n\nMARK OF A STUDENT:%d",s2.mark);

     printf("\n\nNAME OF THE STUDENT:%s",s3.name);
     printf("\n\nROLL NO OF A STUDENT:%d",s3.roll);
     printf("\n\nMARK OF A STUDENT:%d",s3.mark);


 return 0;

 }