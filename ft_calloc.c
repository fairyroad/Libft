#include  "libft.h"

static  void  *ft_memset(void *s, int c,  size_t  n)
{
  size_t  i;
  unsigned  char  *tmp;
  
  tmp = (unsigned char  *)s;
  i = 0;
  while (i < n)
  {
    tmp[i++]  = c;
  }
  return  (s);
}

void  *ft_calloc(size_t cnt,  size_t  size)
{
  void  *tmp;
  if  (!(tmp  = (char*)malloc(sizeof(char)  * cnt * size)))
    return  (NULL);
  ft_memset(tmp,  0,  cnt * size);
  return  (tmp);
}
