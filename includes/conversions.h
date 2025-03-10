/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:41:33 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/02/13 19:22:43 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include "libft.h"

double	ft_atod(const char *str);
int		ft_atoi(const char *str);
char	*ft_dtoa(double n, int precision);
char	*ft_itoa(int n);
size_t	ft_nbr_len(unsigned long nbr);
char	*ft_str_tolower(char *str);
char	*ft_str_toupper(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_uitoa(unsigned int n);

#endif
