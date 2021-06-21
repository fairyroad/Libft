#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  if (lst == NULL)
    return (NULL);
  t_list *tmp = lst;
  while (tmp -> next != NULL)
    tmp = tmp -> next;
  return (tmp);
}
