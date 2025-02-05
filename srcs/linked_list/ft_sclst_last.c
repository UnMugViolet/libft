/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sclst_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:00:50 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/05 11:02:14 by pjaguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_sclist	*ft_sclst_last(t_sclist *stack)
{
	t_sclist	*begin;

	begin = stack;
	if (!stack)
		return (NULL);
	while (stack->next != begin)
		stack = stack->next;
	return (stack);
}
