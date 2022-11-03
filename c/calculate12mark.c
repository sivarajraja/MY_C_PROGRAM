/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 20/01/2022
 * TIME    : 8:07 PM
 * PROJECT : CALCULATE 12 MARK WITH CUTOFF

 */

#include<stdio.h>
#include<conio.h>

int main()
{
    char name[11];
    float t,e,p,c,m,cs,bi;
    float co,tot,per,group;
    int i,j;

    re:

    printf("\nENTER YOUR NAME:");
    gets(name);

    printf("\nENTER YOUR GROUP\n1.COMPUTER SCIENCE\n2.BIOLOGY:");
    scanf("%f",&group);

    printf("\nENTER A MARK AS ***/100:");

    printf("\n\nENTER A MARK IN TAMIL:");
    scanf("%f",&t);

    printf("\nENTER A MARK IN ENGLISH:");
    scanf("%f",&e);

    printf("\nENTER A MARK IN PHYSICS:");
    scanf("%f",&p);

    printf("\nENTER A MARK IN CHEMISTRY:");
    scanf("%f",&c);

    printf("\nENTER A MARK IN MATHEMATICS:");
    scanf("%f",&m);

    shiva:

    if(group==1)
    {
    printf("\nENTER A MARK IN COMPUTER SCIENCE:");
    scanf("%d",&cs);
         i=cs;
    }

    else if (group==2)
    {
        printf("\nENTER A MARK IN BIOLOGY:");
        scanf("%d",&bi);
          i=bi;
    }

    else
    {
        printf("\nPLEASE ENTER CORRECT GROUP:");
        goto shiva;
    }

    tot=t+e+p+c+m+i;

    co=((c/2)+(p/2)+m);

    per=tot/6;

    printf("\n\tHello! %s",name);

    printf("\n\t             HSC MARK LIST               ");
    printf("\n\t-----------------------------------------");

    printf("\n\n\tTAMIL        =           %.2f",t);
    printf("\n\n\tENGLISH      =           %.2f",e);
    printf("\n\n\tPHYSICS      =           %.2f",p);
    printf("\n\n\tCHEMISTRY    =           %.2f",c);
    printf("\n\n\tMATHEMATICS  =           %.2f",m);

    if(group==1)
    {
    printf("\n\n\tCOMPUTER     =           %.2f",i);
    }

    else if (group==2)
    {
    printf("\n\n\tBIOLOGY      =           %.2f",i);
    }

    printf("\n\t-----------------------------------------");

    printf("\n\n\tTOTAL        =           %.2f",tot);

    printf("\n\t-----------------------------------------");

    printf("\n\n\n\n\tCUTOFF     =           %.2f",co);

    printf("\n\n\tPERCENTAGE   =           %.2f",per);

    if(tot>500)
        printf("\n\n\tYOU GET AWESOME MARKS!");

    else if(tot>400)
        printf("\n\n\tYOU GET NORMAL MARKS!");

    else
    {
        printf("\n\n\t\tYOU GET POOR MARKS!");
    }       

    printf("\n\n\tENTER:");
    printf("\n\t1.EXIT:\n\t2.RE CALCULATE:");
    scanf("%d",&j);

    if (j==1)
    {
        goto exit;
    }
    else if (j==2)
    {
        goto re;
    }
    exit:

    printf("\n\n\t*****THANK YOU*****");

 return 0;  

}