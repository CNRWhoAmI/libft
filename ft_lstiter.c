/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:47:38 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/17 16:47:54 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (1)
		{
			f(tmp->content);
			tmp = tmp->next;
			if (tmp == NULL)
				return ;
		}
	}
}
