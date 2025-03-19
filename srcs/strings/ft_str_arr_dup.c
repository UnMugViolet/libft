/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_arr_dup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:30:18 by yguinio           #+#    #+#             */
/*   Updated: 2025/03/19 10:30:48 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utils.h"

char	**ft_str_array_dup(char **array)
{
	int		i;
	char	**dup;

	if (!array || !*array)
		return (NULL);
	i = 0;
	while (array[i])
		i++;
	dup = (char **)ft_calloc(sizeof(char *), i + 1);
	if (!dup)
		return (NULL);
	i = -1;
	while (array[++i])
		dup[i] = ft_strdup(array[i]);
	dup[i] = NULL;
	return (dup);
}
