#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *tmp;
  t_list *tmp2;
  
  tmp2 = 0;
  if (lst == NULL || f == NULL)
    return (NULL);
  while (lst)
  {
    if(!(tmp = ft_lstnew(f(lst -> content))))
    {
      ft_lstclear(&tmp2, del);
      return (NULL);
    }
    ft_lstaddback(&tmp2, tmp);
    lst = lst -> next;
    tmp = tmp -> next;
  }
  return (tmp2);
}
