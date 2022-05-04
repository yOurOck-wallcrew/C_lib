#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_isalnum(int c);
int ft_isspace(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_putchar_fd(char c, int fd);
int	ft_strncmp	(const char *s1, const char *s2, unsigned int n);
int	ft_memcmp(const void *str1, const void *str2, unsigned int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr(int nb, int fd);
int	ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);


void	*ft_memchr(const void *s, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *ptr, int x, int n);
void *ft_calloc(unsigned int count, unsigned int size);
char	*strchr(const char *str, int c);
char    *ft_strjoin(char const *s1, char const *s2);


unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int dstsize);


void	ft_memmove(void *dst, const void *src, unsigned int len);
void	ft_bzero(void *s, unsigned int n);
void    ft_putchar(char c);


char	*ft_strdup(const char *s1);

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

