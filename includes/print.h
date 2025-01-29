/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:45:30 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/01/29 13:51:30 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "libft.h"

size_t	ft_count_putchar_fd(char c, int fd);
size_t	ft_count_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);

#endif
