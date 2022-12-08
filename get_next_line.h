/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:08:03 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/06 16:28:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);

int	ft_strchr(char *s, int c);

char	*ft_fill(char *str);

void	ft_buffer_copy(char *buff, char *str);

char	*ft_next(char *str);

char	*ft_strjoin(char *s1, char *s2, int i, int j);

char	*ft_strdup(char *src);

size_t	ft_strlen(char *str);

int	ft_is_free(int size, char *buff);

#endif