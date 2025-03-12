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

static char	*ft_get_strset(char const *str, char **strset)
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

static void	ft_check_quotes(t_quotes *quotes, char c)
{
	if (c == quotes->dbl && !quotes->in_sgl)
		quotes->in_dbl = !quotes->in_dbl;
	if (c == quotes->single && !quotes->in_dbl)
		quotes->in_sgl = !quotes->in_sgl;
}

static size_t	count_words(char const *str, char **strset, t_quotes *quotes)
{
	size_t	i;
	int		is_word;
	size_t	words_count;

	i = -1;
	is_word = 0;
	words_count = 0;
	while (str[++i])
	{
		ft_check_quotes(quotes, str[i]);
		if (!quotes->in_sgl && !quotes->in_dbl && ft_get_strset(str + i,
				strset))
		{
			words_count++;
			i += ft_strlen(ft_get_strset(str + i, strset));
			is_word = 0;
			continue ;
		}
		if (!quotes->in_sgl && !quotes->in_dbl && str[i] == ' ')
			is_word = 0;
		if (!is_word)
		{
			words_count++;
			is_word = 1;
		}
	}
	return (words_count);
}

static size_t	ft_word_len(char const *str, char **strset, t_quotes *quotes)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == quotes->single)
		{
			while (str[++i] != quotes->single)
				;
			return (i + 1);
		}
		if (str[i] == quotes->dbl)
		{
			while (str[++i] != quotes->dbl)
				;
			return (i + 1);
		}
		if (ft_get_strset(str, strset))
			return ( printf("word len: %zu\nword: %s\n", ft_strlen(ft_get_strset(str, strset)), str), ft_strlen(ft_get_strset(str, strset)));
		if (str[i] == ' ' || (i > 0 && ft_get_strset(str + i, strset)))
			break ;
		i++;
	}
	printf("word len: %zu\nword: %s\n", i, str);
	return (i);
}

static char	**write_split(char **array, char const *str, char **strset,
		t_quotes *quotes)
{
	size_t	i;
	size_t	word_len;
	size_t	word_count;

	i = 0;
	word_count = count_words(str, strset, quotes);
	while (i < word_count)
	{
		while (*str == ' ' && *str != quotes->dbl && *str != quotes->single)
			str++;
		word_len = ft_word_len(str, strset, quotes);
		array[i] = (char *)ft_calloc(sizeof(char), word_len + 1);
		if (!array[i])
			return (ft_free_array_str(array), NULL);
		ft_strlcpy(array[i], str, word_len + 1);
		str += word_len + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split_strset_quote(char const *str, char **strset, t_quotes *quotes)
{
	char		**array;
	size_t		word_count;

	word_count = count_words(str, strset, quotes);
	if (!str)
		return (NULL);
	array = (char **)ft_calloc(sizeof(char *), (word_count + 1));
	if (!array)
		return (NULL);
	return (write_split(array, str, strset, quotes));
}
