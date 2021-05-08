#include  "libft.h"

void  *ft_bzero(void  *s,  size_t  n)
{
  size_t  num;
  unsigned  char  *tmp;
  
  num = 0;
  tmp = (unsigned char  *)s;
  while (num  < n)
  {
    tmp[num++]  = (unsigned char)0;
  }
  return  (s);
}
