/*    "hello"

 * AUTHOR  : SHIVA
 * DATE    : 06/02/2022
 * TIME    : 12:01 PM
 * PROJECT : FILE HANDLING IN C

 */

 #include<stdio.h>

 int main()
 {
    FILE *fp;
    char r[20];
    fp=fopen("test.txt","r");
    
    while(fscanf(fp,"%s",r)!=EOF)
    printf("%s ",r);

    fclose(fp);

 return 0;   
 }