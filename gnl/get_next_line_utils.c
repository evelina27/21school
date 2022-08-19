/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:53:17 by jeddard           #+#    #+#             */
/*   Updated: 2021/12/23 18:53:19 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	new_buf(int fd, char *b)
{
	int	f;

	// printf("The f*ck?!\n");
	f = read(fd, b, BUFFER_SIZE);
	if (f < 0)
	{
		b[0] = '\0';
		// printf("New buf is empty\n");
		return (1);
	}
	b[f] = '\0';
	// printf("New buf: '%s'\n", b);
	return (0);
}

size_t	ft_strlen(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c) // добавила проверку тек символа на \0
		i++;
	if (c != '\0' && str[i] != '\0') // если не до \0 и не зкаончилась строка то +1
		i++;
	return (i);
}

char	*join(char *s1, char *s2, size_t *ind)
{
	char	*ret;
	size_t	len;
	size_t	i;

	// printf("it's you isn't it...\n");
	ret = malloc(ft_strlen((char *)s1, '\0') + ft_strlen((char *)s2, '\n') + 1);
	if (!ret)
		return ((void *)0);
	len = 0;
	// printf("s1: '%s'\n", s1);
	while (s1[len])
	{
		// printf("while 1\n");
		ret[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i] && s2[i] != '\n')
	{
		// printf("while 2\n");
		ret[len + i] = s2[i];
		i++;
	}
	ret[len + i] = '\n';
	*ind = i;
	i += (s2[i] == '\n');
	ret[len + i] = '\0';
	free(s1);
	return (ret);
}

size_t	buf_check(char *buf, size_t *i, int fd)
{
	size_t	j;

	if (buf[*i] == '\n')
	{
		// printf("New line\n");
		(*i)++;
	}
	if (buf[*i] == '\0')
	{
		// printf("End of buf\n");
		*i = new_buf(fd, buf);
	}
	if (buf[*i] == '\0')
	{
		// printf("End of file\n");
		return (0);
	}
	j = 0;
	while (buf[*i + j] && buf[*i + j] != '\n')
		j++;
	j += (buf[*i + j] == '\n');
	return (j);
}
