/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:49:30 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/11 12:58:32 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include "bases.h"
# include "libft.h"
# include "print.h"
# include <stdarg.h>

int		ft_fprintf(int fd, const char *str, ...);
int		ft_fprint_string_count(char *str, int fd);
int		ft_fprint_number_count(int n, int fd);
int		ft_fprint_unsigned_count(unsigned int n, int fd);
int		ft_fcount_putptr_fd(unsigned long int ptr, int fd);
int		ft_fcount_puthex_base_fd(unsigned int nbr, char type, int fd);
int		ft_fprint_float_count(double n, int fd);

#endif
