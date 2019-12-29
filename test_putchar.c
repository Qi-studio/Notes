#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
  int ch;
  int c;
  while((ch = getchar()) != EOF)
    {
      if((c = putchar(ch)) == EOF)
	{
	  perror("puchar failed \n");
	  exit(1);
	}

    }
  if(feof(stdin))
    {
      printf("end of file reached \n");
      exit(0);
    }
  if(ferror(stdin))
    {
      printf("File read error, errno: %d \n", errno);
      perror("Human Readable Error");
      exit(1);
    }
  return 0;
}
