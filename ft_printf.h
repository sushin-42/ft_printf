#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h>

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
int             ft_type_string(t_flag *flags, char *str);
int             ft_put_string(t_flag *flags, char *str);
int             ft_type_int(t_flag *flags, int i);
int             ft_plus_int(char *a_i, t_flag *flags);
int             ft_minus_int(char *a_i, t_flag *flags);
int             ft_plus_put_int(char *a_i, t_flag *flags);
int             ft_minus_put_int(char *a_i, t_flag *flags);
int             ft_type_unint(t_flag *flags, unsigned int i);
char            *ft_unitoa(unsigned int n);
void            ft_unint_put_tmp(char *temp, unsigned int n, unsigned int n_len);
unsigned int    ft_unint_len_check(unsigned int n);
int             ft_type_percent(t_flag *flags);
int             ft_type_hexa(t_flag *flags, unsigned int n, int upper);
char            *ft_str_upper(char *str);
char            ft_upper(int a);
char            *ft_change_base(unsigned long long n, int base);
char            *ft_put_change(unsigned long long n, char *temp, int base, int n_len);
int             ft_type_pointer_add(t_flag *flags, unsigned long long n);
int             ft_put_pointer_add(char *pointer_n);
t_flag          *ft_flag_width_star(va_list ap, t_flag *flags);
#endif
