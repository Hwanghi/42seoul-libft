/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:22:11 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/21 22:50:43 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*last_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	new_list = ft_lstnew(content);
	if (!new_list)
		return (NULL);
	last_node = new_list;
	lst = lst->next;
	while (lst != NULL)
	{
		content = f(lst->content);
		last_node->next = ft_lstnew(content);
		if (!last_node->next)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		last_node = last_node->next;
		lst = lst->next;
	}
	return (new_list);
}
