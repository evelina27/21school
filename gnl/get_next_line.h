/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:53:27 by jeddard           #+#    #+#             */
/*   Updated: 2021/12/23 18:53:29 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/file.h>

int		new_buf(int fd, char *b);
size_t	ft_strlen(char *str, char c);
char	*join(char *s1, char *s2, size_t *ind);
size_t	buf_check(char *buf, size_t *i, int fd);
char	*get_next_line(int fd);

#endif
