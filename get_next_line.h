/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 08:24:03 by gbouwen       #+#    #+#                 */
/*   Updated: 2019/12/05 08:31:34 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

int		get_next_line(int fd, char **line);
char	*get_correct_line(char *file, int start_pos, int pos_n);
int		first_read(int fd, char **file, int *start_pos, int *pos_n);
char	*read_until_newline(int fd, char **file, int start_pos, int *pos_n);
int		free_and_zero(char *file);

char	*ft_strdup(char *s1);
char	*ft_join_free(char *file, char *temp);
int		ft_strlen_v2(char *str, int start_pos);
int		get_pos_n(char *file, int start_pos);
char	*ft_cpy(char *str, char *file, int start_pos, int pos_n);

#endif
