#include  "libft.h"

size_t  strlcat(char  *dst, const char  *src, size_t  size)
{
  size_t  i;
  size_t  len_dst;
  size_t  len_src; 
  
  i = 0;
  while(dst[i])
    i++;
  len_dst = i;
  len_src = 0;
  if  (size > len_dst + 1)
  {
    while((len_src + len_dst + 1 < size) &&  src[i])
      dst[i++]  = src[len_src++];
    dst[i]  = '\0';
    return  (len_src  + len_dst);
  }
  else
    return  (size + len_src);
}
