#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *ptr;
    t_list  *temp;

    ptr = lst;
    temp = (st_list)malloc(sizeof(t_list));
    if (temp == NULL)
        return (NULL);
    temp -> data = data;
    temp -> link -> NULL;

    while (ptr -> link != NULL)
        ptr = ptr -> link;
    ptr -> link = temp;
    return (lst);
}