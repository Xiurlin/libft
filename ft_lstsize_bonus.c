/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:06:15 by drestrep          #+#    #+#             */
/*   Updated: 2022/08/27 12:10:17 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;

	aux = lst;
	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
