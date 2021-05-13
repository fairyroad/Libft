#include  "libft.h"

static  size_t  ft_strlen(const  char  *s)
{
  size_t  num;
  
  num = 0;
  while(s[num])
  {
    num++;
  }
  return  (num);
}

char  *ft_strjoin(char  const *s1,  char  const *s2)
{
  size_t  i;
  size_t  j;
  char    *tmp;

  i = 0;
  j = 0;
  tmp = (char*)malloc(sizeof(char)  * (ft_strlen(s1)  + ft_strlen(s2) + 1));
  while (s1[i])
  {
    tmp[i]  = s1[i];
    i++;
  }
  while (s2[j])
    tmp[i++]  = s2[j++];
  tmp[i]  = '\0';
  return  (tmp);
}
