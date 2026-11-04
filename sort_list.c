#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp = lst;

	while(tmp && tmp->next)
	{
		if (cmp(tmp->data, tmp->next->data) == 0)
		{
			swap = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = swap;
			tmp = lst;
		}
		else {
			tmp = tmp->next;
		}
	}
	return (lst);
}
