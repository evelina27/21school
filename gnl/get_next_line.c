/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:56:15 by jeddard           #+#    #+#             */
/*   Updated: 2021/12/23 18:56:22 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		buf[BUFFER_SIZE + 1];
	char			*ret;
	static size_t	i;
	size_t			j;

	// printf("buf: '%s'\n", buf);
	j = buf_check(buf, &i, fd);
	if (buf[i] == '\0' && j == 0)
		return (NULL);
	ret = malloc(sizeof(char) * (j + 1));
	if (!ret)
		return (NULL);
	j = 0;
	while (buf[i] && buf[i] != '\n')
	{
		// printf("Saving the line...\n");
		ret[j] = buf[i];
		i++;
		j++;
	}
	if (buf[i] == '\n')
	{
		// printf("Ending the line\n");
		ret[j] = '\n';
		j++;
	}
	ret[j] = '\0';
	// printf("Current line: '%s'\n", ret);
	while (buf[i] != '\n' && buf[0] != '\0' && ret)
	{
		// printf("2nd while\n");
		i = new_buf(fd, buf);
		if (i == 1)
		{
			free(ret);
			return (NULL);
		}
		ret = join(ret, buf, &i);
		// printf("gnl: ret size sec = %lld\n", ft_strlen(ret, '\0'));
	}
	return (ret);
}
