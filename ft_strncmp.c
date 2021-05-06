#include  "libft.h"

int   ft_strncmp(const char  *str1,  const char  *str2,  size_t  len)
{
  int   i;
  
  i = 0;
  while ((str1[i]  ==  str2[i]) &&  i < len)
  {
    i++;
  }
  return  (str1[i]  - str2[i]);
}
