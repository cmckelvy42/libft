/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:04:54 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/17 15:37:45 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char *str);
void				ft_bzero(void *s, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t size);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strchr(char const *s, int c);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strdup(char const *src);
unsigned int		ft_strlcat(char *dest, char const *src, unsigned int size);
unsigned int		ft_strlen(char const *str);
char				*ft_strncat(char *dest, char const *src, int nb);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strncpy(char *dest, char const*src, size_t n);
char				*ft_strnstr(char const *str, char const *to_find, size_t len);
char				*ft_strrchr(char const *s, int c);
char				*ft_strstr(char *str, char *to_find);
int					ft_tolower(int c);
int					ft_toupper(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **ap);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putendl(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);

int					ft_isspace(char const c);
int					ft_wordlen(char const *s, char const c);
int					ft_wordcount(char const *s, char const c);
int					ft_digits(int n);

#endif