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
    fp=fopen("test.txt","w");
    
    fprintf(fp,"THIS IS MY FIRST");

    fclose(fp);

 return 0;   
 }