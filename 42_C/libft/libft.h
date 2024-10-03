
#ifndef LIBFT_H
# define LIBFT_H

void	bzero(void *s, size_t n);
void	*memset(void *ptr, int value, size_t num);
char		*strchr(const char *string, int c);
char		*strrchr(const char *string, int c);
int			ft_atoi(char *str);
int			ft_isalnum(char *str);
int			ft_isalpha(char *str);
int			isascii(int a);
int			ft_isdigit(char *str);
int			ft_isprint(char *str);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
int			ft_tolower(char *str);
void			ft_toupper(char *str);
unsigned int				ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int				ft_strlcpy(char *dest, char *src, unsigned int size);


//to_do_list
ft_memchr
ft_strnstr
#endif
