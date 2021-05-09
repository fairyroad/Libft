#include  "libft.h"

void  *ft_memcpy(void *dest,  const void  *src, size_t  num)
{
  unsigned  char  *tmp;
  const unsigned  char  *s;
  
  tmp = (unsigned char*)dest;
  s = (const  unsigned  char*)s;
  while (num--)
    *tmp++  = *src++;
  return  (dest);
}
