#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct  s_flag
{
    int         minus;
    int         zero;
    int         width;
    int         type;
    int         precision;
}               t_flag;

int             ft_printf(const char *hagisilta, ...);
int             ft_putchar(char i);
int             ft_flag_set(const char *bowl, int i, va_list ap, t_flag *flags);
int             ft_flag_precision(const char *bowl, int i, t_flag *flags, va_list ap);
int             ft_type_check(int c, t_flag *flags);
int             ft_type_path(t_flag *flags, va_list ap);
int             ft_type_char(t_flag *flags, char c);
int             ft_putwidth(int width, int diff, int has_zero);

#endif
