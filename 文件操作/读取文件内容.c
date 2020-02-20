#include <stdio.h>

int main ()
{
   FILE *fp;
   int c;

   fp = fopen("file.txt","r");
   while(1)
   {
      c = fgetc(fp);
      if( feof(fp) )
      {
      	  printf("finished");
          break ;
      }
      printf("%c\n", c);
   }
   fclose(fp);
   return(0);
}
