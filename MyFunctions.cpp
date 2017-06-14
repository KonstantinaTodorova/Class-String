#include "MyFunctions.h"

int mystrlen(char* src)
{
    int counter = 0;
    for(int c = 0; src[c] != '\0'; c++)
    {
        counter++;
    }
    return counter;
}
void mystrcpy(char* dst, char* src)
{
    for(int c = 0; c < mystrlen(src) + 1;c++)
        dst[c] = src[c];
}

int mystrcmp(const char *str1, const char *str2)
{
  int c = 0;
  while (!(c = *(char *) str1 - *(char *) str2) && *str2) ++str1, ++str2;

  if (c < 0)
    c = -1;
  else if (c > 0)
    c = 1 ;

  return c;
}
