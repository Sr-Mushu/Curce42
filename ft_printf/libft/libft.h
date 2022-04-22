/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:38:07 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/11 13:01:55 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
/*==================| parte 1 |======================*/
int				ft_isprint(int character);
int				ft_isascii(int character);
int				ft_isalnum(int character);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_toupper(int character);
int				ft_tolower(int character);
void			*ft_memset(void *string, int character, size_t size);
void			*ft_memcpy(void *destiny, const void *sources, size_t size);
void			*ft_memmove(void *destiny, const void *sources, size_t size);
void			*ft_memchr(const void *string, int character, size_t nunber);
void			*ft_memccpy(void *destiny, const void *sources,
					int character, size_t nunber);
int				ft_memcmp(const void *string_01, const void *string_02,
					size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
void			ft_bzero(void *destiny, size_t size);
size_t			ft_strlcat(char *destiny, const char *sources, size_t size);
size_t			ft_strlen(const char *string);
char			*ft_strchr(const char *string, int character);
char			*ft_strrchr(const char *string, int character);
int				ft_strncmp(const char *string_01,
					const char *string_02, size_t size);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
int				ft_atoi(const char *string);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *string);
/*==================| parte 2 |======================*/
void			ft_putchar_fd(char character, int fd);
void			ft_putnbr_fd(int nunber, int fd);
void			ft_putstr_fd(char *string, int fd);
void			ft_putendl_fd(char *string, int fd);
char			*ft_itoa(int n);
char			*ft_substr(const char *srting, unsigned int start, size_t len);
char			*ft_strmapi(char const *string,
					char (*funcion)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strtrim(char const *string_1, char const *set);
char			*ft_strjoin(char const *string_01, char const *string_02);
char			**ft_split(char const *s, char c);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
/*==================| Bonos Parte |==================*/
/*==================| Extra Parte |==================*/
/*==================| Dicionario  |==================*/
#endif /*LIBFT*/