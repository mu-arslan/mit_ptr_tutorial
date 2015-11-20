#include <stdio.h>

char srtA[40] = "string deneme bir iki uc";

int str_len(char *src_string)
{
int i=0;

  while(*src_string != '\0')
  {
    src_string++;
    i++;
  } 
  return i;
}

main(void)
{
  int str_length=0;
  
  str_length = str_len(srtA);
  printf("\n");
  printf("the length of the string is %d\n", str_length);
}


