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
int             ft_type_parse(t_flag *flags, va_list ap);
int             ft_type_char(flags, va_arg(ap, char));
int             ft_type_string(flags, va_arg(ap, char *));
int             ft_type_int(flags, va_arg(ap, int));
int             ft_type_hexa(flags, va_arg(ap, unsigned int));
int             ft_type_unint(flags, va_arg(ap, unsigned int));
int             ft_type_pointer_add(flags, va_arg(ap, unsigned long long));
int             ft_type_percent(flags);

#endif
