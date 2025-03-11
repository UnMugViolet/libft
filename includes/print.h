/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:45:30 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/03/07 15:23:13 by pjaguin          ###   ########.fr       */
=======
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:45:30 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/03/11 14:29:36 by fureimu          ###   ########.fr       */
>>>>>>> a790b96
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
<<<<<<< HEAD
void	ft_print_array_str(char **array);
void	ft_print_array_str(char **array);
=======
void	ft_print_array_str_fd(char **array, int fd);
>>>>>>> a790b96

#endif
