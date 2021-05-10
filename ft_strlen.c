#include "libft.h"

size_t  ft_strlen(const  char  *s)
{
  size_t  num;
  
  num = 0;
  while(s[num])
  {
    num++;
  }
  return  (num);
}
