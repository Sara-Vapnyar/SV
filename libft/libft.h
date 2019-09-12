#include <stdlib.h>

#include <string.h>
#include <stdio.h>
#include <unistd.h>


void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
size_t  ft_strlen(const char *s);
void    *ft_memmove(void *dst, const void *src, size_t len);
char    *ft_strdup(const char *s1);
void    ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl(char const *s);
char    * ft_strnew(size_t size);
void    ft_putstr(char const *s);
char    *ft_strchr(const char *s, int c);
void    ft_strclr(char *s);
int     ft_strequ(char const *s1, char const *s2);
char    * ft_strjoin(char const *s1, char const *s2);
char    * ft_strmap(char const *s, char (*f)(char));
char    * ft_strsub(char const *s, unsigned int start, size_t len);
