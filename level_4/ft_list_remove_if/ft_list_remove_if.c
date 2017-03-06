/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:37:56 by kcheung           #+#    #+#             */
  /* Updated: 2017/01/09 16:06:54 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *freeme;

	if(*begin_list)
	{
		if(cmp(data_ref, (*begin_listi)->data))
		{
			freeme = *begin_list;
			*begin_list = (*begin_list)->next;
			free(freeme);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove((*begin_list)->next, data_ref, cmp);
	}
}

