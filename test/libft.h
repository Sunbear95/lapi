
#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int a);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *source, size_t num);
void	*ft_memmove(void *dest, const void *source, size_t num);
unsigned int				ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int				ft_strlcat(char *dest, char *src, unsigned int size);

void			ft_toupper(char *str);
int			ft_tolower(int c);
char		*ft_strchr(const char *string, int c);
char		*ft_strrchr(const char *string, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(char *str);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *src);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	 ft_putnbr_fd(int n, int fd);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//to_do_list



#endif
