#include  "libft.h"

char  *ft_substr(char const *s, unsigned  int start,  size_t  len)
{
  size_t  i;
  size_t  j;
  char    *tmp;
  
  i = start;
  j = 0;
  if(s  ==  NULL)
    return  (NULL);
  if(!(tmp = (char*)malloc(sizeof(char)  * len  + 1)))
    return  (NULL);
  while (len--)
  {
    tmp[j++]  = s[i++];
  }
  tmp[j]='\0';
  return  (tmp);
}
