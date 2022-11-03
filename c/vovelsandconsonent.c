/*      "hello"

 * AUTHOR  : SHIVA
 * DATE    : 19/01/2022
 * TIME    : 10:49 AM
 * PROJECT : FIND VOWELS AND CONSONENTS

 */

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     char n[80];
     int i,j;
     int vow,con;
		
	 vow=con=0;
	 

     printf("\nenter a text in letters (A-Z) or (a-z)=");
     gets(n);

     for(i=0; n[i]!='\0'; ++i)
     {
         j=n[i];

         if((j>='A' && j<='Z') || (j>='a' && j<='z') )
         {
            switch(j)
            {
              case 'a':
              case 'e':
              case 'i':
              case 'o':
              case 'u':
              case 'A':
              case 'E':
              case 'I':
              case 'O':
              case 'U':
                
				vow++;
                break;
                
                default:
                	con++;

            }

        
		}
     }

     printf("\n\nvowels=%d",vow);
     printf("\nconsonants=%d",con);
     printf("\n\n\t*****thank you*****");

 return 0;
 }
