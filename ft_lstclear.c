#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *tmp;
  
  if (lst == NULL || del == NULL)
    return ;
  while (*lst)
  {
    tmp = (*lst) -> next;
    del((*lst) -> content);
    free(*lst);
    *lst = tmp;
  }
  *lst = 0;
}
