/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 09:24:42 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/08 14:14:44 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_atoi(const char *str);
int		ft_atoi_base(const char *str, const char *base);
void	ft_bzero(void *s, size_t n);
int		ft_ctoi(char c);
int		ft_find_next_prime(int nb);
int		ft_is_prime(int nb);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_iterative_power(int nb, int power);
char	*ft_itoa(int n);
int		ft_itoc(int i);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_sort_integer_table(int *tab, int size);
int		ft_sqrt(int nb);
int		ft_str_cw(char const *s, char c);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);

char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strlowcase(char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strrev(char *str);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strupcase(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
