#include  "libft.h"

size_t  strlcpy(char  *dst, const char  *src, size_t  size)
{
  size_t  i;
  size_t  num;
  
  i = 0;
  num = size - 1;
  while(src[i]  &&  num >  0)
  {
    dst[i]  = src[i];
    i++;
    num--;
  }
if  (size > 0)
{
  dst[i]  = '\0';
}
  return  (i);
}
