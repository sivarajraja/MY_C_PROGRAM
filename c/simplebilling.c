 /*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 28/01/2022
 * TIME    : 1:26 PM
 * PROJECT : SIMPLE BILLING SOFTWARE

 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    float price,gst,total,dis;
    char n[10];
    int qty;
    float net;
    int ans;

    gst=total=0;

    shiva:

    printf("enter your name:");
    gets(n);

    printf("\nenter item name:");
    gets(name);

    printf("\nenter price:");
    scanf("%f",&price);

    printf("\nhow many qty:");
    scanf("%d",&qty);

    price=qty*price;
    dis=price*0.10;
    gst=(price*0.18);
    net=price-dis;
    total=net+gst;
    
    printf("\n\t----------------------------------------------------");
    printf("\n\t\tS A M P O O R N A   R E S T A U R A N T");
    printf("\n\t----------------------------------------------------");
    printf("\n\tDATE:JAN 28 2021\n\tNAME:%s",n);
    printf("\n\t----------------------------------------------------");
    printf("\n\t\t     **** BILLING RECEIPT ****");
    printf("\n\t----------------------------------------------------");
    printf("\n\t SNO        ITEM            QTY            PRICE    ");
    printf("\n\t----------------------------------------------------");
    printf("\n\t  1.        %s              %-3d           %.3f",name ,qty ,price);
    printf("\n\t----------------------------------------------------");
    printf("\n\tSUB TOTAL                                  %.3f     ",price);
    printf("\n\tDISCOUNT                                   %.3f    ",dis);
    printf("\n\t                                        -----------  ");
    printf("\n\tNET TOTAL                                  %.3f     ",net);
    printf("\n\tGST                                        %.3f     ",gst);
    printf("\n\t----------------------------------------------------");
    printf("\n\tGRAND TOTAL                                %.3f",total);
    printf("\n\t----------------------------------------------------");
    printf("\n\n\t           thank you! do visit again :)               ");
 

return 0;
}