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

static size_t  mark_firstindex(char const *s1, char const *s2)
{
  size_t   i;
  size_t   fpoint;
  
  i = 0;
  fpoint = 0;
  while (s1[i])
    if  (trim_len(s1[i++],  s2) ==  1)
      fpoint++;
    else
      return (fpoint);
}

static size_t mark_lastindex(char const *s1, char const *s2)
{
  size_t i;
  size_t epoint;
   
  i = ft_strlen(s1[i]) - 1;
  epoint = i;
  while (s1[i])
    if  (trim_len(s1[i--], s2) == 1)
      epoint--;
    else
      return (epoint);
}

char  *ft_strtrim(char  const *s1,  char  const *s2)
{
  size_t   i;
  size_t   fpoint;
  size_t   epoint;
  char     *tmp;
 
  epoint = mark_lastindex(s1,s2);
  fpoint  = mark_firstindex(s1,s2);
  if((fpoint <= epoint) && 
     !(tmp = (char*)malloc(sizeof(char)  * (epoint  - fpoint  + 1))))
    return  (NULL);
  else
      return ((char*)ft_calloc(sizeof(char), 1);
  i = 0;
  while (fpoint <= epoint)
    tmp[i++]  = s1[fpoint++];
  tmp[i]  = '\0';
  return  (tmp);
}
