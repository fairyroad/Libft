#include  "libft.h"

void  *ft_memchr(void *src, int value,  size_t  n)
{
  size_t  i;
  unsigned  char  *tmp;
  
  i = 0;
  tmp = (unsigned char*)src;
  while (i  < n)
  {
    if  (value  ==  tmp[i])
      return  (tmp+i);
    i++;
  }
  return  (NULL);
}
