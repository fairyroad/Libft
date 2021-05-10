#include  "libft.h"

int   ft_memcmp(void  *ptr1,  void  *ptr2,  size_t  n)
{
  size_t  i;
  unsigned  char  *p1;
  unsigned  char  *p2;
  
  i = 0;
  p1  = (unsigned char*)ptr1;
  p2  = (unsigned char*)ptr2;
  while (i  < n &&  p1[i] ==  p2[i])
    i++;
  return  (p1[i]  - p2[i]);
}
