/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sclst_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:15:50 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/05 11:21:29 by pjaguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_sclist	*ft_sclst_new(int content)
{
	t_sclist	*new_element;

	new_element = (t_sclist *)ft_calloc(sizeof(t_sclist), 1);
	if (!new_element)
		return (NULL);
	new_element->value = content;
	new_element->next = new_element;
	return (new_element);
}
