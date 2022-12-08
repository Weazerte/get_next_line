/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:08:00 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/06 17:09:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buff;
	char		*stash;
	static char	*str;
	ssize_t		size;

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	size = 1;
	while (size && ft_strchr(str, '\n') <= 0)
	{
		buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buff)
			return (NULL);
		size = read(fd, buff, BUFFER_SIZE);
		if (ft_is_free(size, buff) == 0)
			break ;
		buff[size] = 0;
		str = ft_strjoin(str, buff, -1, -1);
		free(buff);
	}
	stash = ft_fill(str);
	str = ft_next(str);
	return (stash);
}

int	ft_is_free(int size, char *buff)
{
	if (size <= 0)
	{
		free(buff);
		return (0);
	}
	else
		return (1);
}

char	*ft_strjoin(char *s1, char *s2, int i, int j)
{
	char	*tmp;

	if (!s1)
	{
		s1 = (char *)(malloc(sizeof(char) * 1));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2 || !s1)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	while (s1[++i])
		tmp[i] = s1[i];
	while (s2[++j])
		tmp[i + j] = s2[j];
	tmp[i + j] = '\0';
	free(s1);
	return (tmp);
}

// int	main(void)
// {
// 	int fd;
// 	char *line;
// 	fd = open("file_test.txt", O_RDONLY);
// 	int i = 12;
// 	while ((i--) >= 0)
// 	{
// 		line = get_next_line(fd);
// 		if (line == NULL)
// 			break ;
// 		// printf("%s", line);
// 		free(line);
// 	}
// 	return (0);
// }