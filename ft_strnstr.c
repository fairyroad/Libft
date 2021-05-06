#include  "libft.h"

static  int   find_match(const  char  *str, const char  *substr,  size_t  len,  int   j)
{
  int   i;
  int   len_sub;
  
  i = 0;
  len_sub = 0;
  while(substr[len_sub])
  {
    len_sub++;
  }
  while(str[j]  &&  substr[i] &&  (j < len) &&  str[j]  ==  substr[i])
  {
    i++;
    j++;
  }
  if  (i  ==  len_sub)
    return  (1);
  return  (0);
}
char  *ft_strnstr(const  char  *str, const char  *substr,  size_t  len)
{
  size_t  i;
  int   flag;
  
  i = 0;
  while(str[i])
  {
    if(str[i] ==  substr[0])
    {
      flag  = find_match(str, substr, len,  i); 
      if  (flag ==  1)
        return  ((char  *)str + i);
    }
    i++;
  }
  return  (0);
}
