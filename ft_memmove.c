#include  "libft.h"

void  *ft_memmove(void  *dest,  const void  *src, size_t  n)
{
  size_t  i;
  unsigned  char  *tmp;
  unsigned  char  mid;
  
  tmp = (unsigned char  *)dest;
  i = 0;
  while (i  < n)
  {
    mid = ((const unsigned  char*)src)[i];
    tmp[i] = mid;
    i++;
  }
  return  (dest);
}
