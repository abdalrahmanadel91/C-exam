#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list **curr = begin_list;
	t_list *temp;

	if (!begin_list)
		return ;
	while(*curr)
	{
		if (cmp((*curr)->data, data_ref) == 0)
		{
			temp = *curr;
			*curr = temp->next;
			free(temp);
		}
		else
			curr = &(*curr)->next;
	}
}
