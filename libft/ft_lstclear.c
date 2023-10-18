/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:40:27 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/18 17:20:22 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given node and every
successor of that node, using the function ’del’
and	free(3).
Finally, the pointer to the list must be set to
NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!*lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
