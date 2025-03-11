/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array_str_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:26:25 by fureimu           #+#    #+#             */
/*   Updated: 2025/03/11 14:28:59 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_array_str_fd(char **array, int fd)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		ft_putendl_fd(array[i], fd);
		i++;
	}
}
