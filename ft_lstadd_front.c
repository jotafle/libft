#include "libft.h"

t_list *ft_lstadd_front(t_list *lst)
{
    t_list  *new;

    new = (t_list)malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new -> data = data;
    new -> link = lst;
    return (new);
}
