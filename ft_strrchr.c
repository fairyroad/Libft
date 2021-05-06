#include  "libft.h"

char  *ft_strrchr(const char  *str, int   c)
{
  int   i;
  int   j;
  
  i = 0;
  j = 0;
  while(str[i])
  {
    if(str[i] ==  c)
      j = i;
    i++;
  }
  if  (j  !=  0)
    return  ((char  *)str + j);
  return  (0);
}
