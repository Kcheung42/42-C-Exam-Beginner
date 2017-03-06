#include "list.h"

t_list *sort_list(t_list *list, int(*cmp)(int,int))
{
	t_list	*current;
	t_list	*insert;
	int		temp;

	current = list;
	insert = list;
	current = current->next;

	while (current)
	{
		insert = list;
		while (insert->next != current)
		{
			if (cmp(insert->data, current->data) == 0)
			{
				temp = current->data;
				current->data = insert->data;
				insert->data = temp;
				free(temp);
			}
			else
				insert = insert->next;
		}
		current = current->next;
	}

}
