#include <stdio.h>
#include <stdlib.h>

#define MYFILE "/dev/memory"
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen(MYFILE,"r")) == NULL){
       printf("Error! opening file %s\n", MYFILE);

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}

