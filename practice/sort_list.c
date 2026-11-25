#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *curr = lst;
	int swap;

	while(curr && curr->next)
	{
		if (cmp(curr->data, curr->next->data) == 0)
		{
			swap = curr->data;
			curr->data = curr->next->data;
			curr->next->data = swap;
			curr = lst;
		}
		else {
			curr = curr->next;
		}
	}
	return (lst);
}
