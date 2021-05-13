#include  "libft.h"

static  size_t  trim_len(char  s1, char  const *s2)
{
  size_t  i;
  
  i = 0;
  while (s2[i])
  {
    if  (s1 ==  s2[i])
      return  (1);
    i++;
  }
  return (0); 
}

char  *ft_strtrim(char  const *s1,  char  const *s2)
{
  size_t   i;
  size_t   s1_len;
  size_t   j;
  char     *tmp;
  
  i = 0;
  j = 0;
  s1_len  = 0;
  while (s1[i])
    if  (trim_len(s1[i++],  s2) ==  1)
      s1_len++;
  if(!(tmp = (char*)malloc(sizeof(char)  * (i  - s1_len  + 1))))
    return  (NULL);
  i = 0;
  while (s1[i])
  {
    if  (trim_len(s1[i],  s2) ==  0)
      tmp[j++]  = s1[i];
    i++;
  }
  tmp[j]  = '\0';
  return  (tmp);
}
