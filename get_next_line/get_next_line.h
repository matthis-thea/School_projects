/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:10:47 by mthea             #+#    #+#             */
/*   Updated: 2022/12/05 11:06:47 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (10)
# endif

char	*get_next_line(int fd);
char	*ft_reading_file(int fd, char *old_string);
char	*ft_strcopy_new(char *s);
char	*ft_clear_old(char *s);
int		ft_comp(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
#endif