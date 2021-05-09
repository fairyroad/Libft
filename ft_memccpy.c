#include  "libft.h"

void  *memccpy(void *dest,  const void  *src, int c,  size_t  n)
{
  unsigned  char  *tmp;
  const unsigned  char  *s;
  
  tmp = (unsigned char*)dest;
  s = (const  unsigned  char*)src;
  while (num--)
  {
    if  (*s ==  c)
      return  (tmp);
    *tmp++  = *s++;
  }
  return  (NULL);
}
