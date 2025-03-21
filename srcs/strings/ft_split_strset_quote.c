/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_strset_quote.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:43:12 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/12 11:34:53 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utils.h"

static char	*ft_get_strset(char *str, char **strset)
{
	int	i;

	i = -1;
	while (strset[++i])
	{
		if (!ft_strncmp(str, strset[i], ft_strlen(strset[i])))
			return (strset[i]);
	}
	return (NULL);
}

static char	*ft_handle_quotes(char *str, size_t *word_count, int *is_word)
{
	if (*str == SGL_QT)
	{
		*word_count += 1;
		*is_word = 0;
		while (*(++str) != SGL_QT)
			;
		return (++str);
	}
	if (*str == DBL_QT)
	{
		*word_count += 1;
		*is_word = 0;
		while (*(++str) != DBL_QT)
			;
		return (++str);
	}
	return (++str);
}

static size_t	ft_count_words(char *str, char **strset)
{
	int		is_word;
	size_t	words_count;

	is_word = 0;
	words_count = 0;
	while (*str)
	{
		if (ft_get_strset(str, strset))
		{
			words_count++;
			str += ft_strlen(ft_get_strset(str, strset));
			is_word = 0;
			continue ;
		}
		if (*str == ' ')
			is_word = 0;
		else if (*str && *str != SGL_QT && *str != DBL_QT && !is_word)
		{
			words_count++;
			is_word = 1;
		}
		str = ft_handle_quotes(str, &words_count, &is_word);
	}
	return (words_count);
}

static size_t	ft_word_len(char *str, char **strset)
{
	size_t	i;

	i = 0;
	if (*str == SGL_QT)
	{
		while (str[++i] != SGL_QT)
			;
		return (i + 1);
	}
	if (*str == DBL_QT)
	{
		while (str[++i] != DBL_QT)
			;
		return (i + 1);
	}
	if (ft_get_strset(str, strset))
		return (ft_strlen(ft_get_strset(str, strset)));
	while (str[i] && str[i] != SGL_QT && str[i] != DBL_QT)
	{
		if (str[i] == ' ' || (i > 0 && ft_get_strset(str + i, strset)))
			break ;
		i++;
	}
	return (i);
}

char	**ft_split_strset_quote(char *str, char **strset)
{
	char			**array;
	size_t const	word_count = ft_count_words(str, strset);
	size_t			word_len;
	size_t			i;

	if (!str)
		return (NULL);
	array = (char **)ft_calloc(sizeof(char *), (word_count + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*str == ' ' && *str != SGL_QT && *str != DBL_QT)
			str++;
		word_len = ft_word_len(str, strset);
		array[i] = (char *)ft_calloc(sizeof(char), word_len + 1);
		if (!array[i])
			return (ft_free_array_str(array), NULL);
		ft_strlcpy(array[i], str, word_len + 1);
		str += word_len;
		i++;
	}
	array[i] = NULL;
	return (array);
}
