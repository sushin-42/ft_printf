#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int a = -123;
    int b = 123;

    printf("%-10.2d\n", a);
    ft_printf("%-10.2d\n", a);
    
    printf("%010.1d\n", a);
    ft_printf("%010.1d\n", a);
    
    printf("%10.1d\n", a);
    ft_printf("%10.1d\n", a);
    
    printf("%-10d\n", a);
    ft_printf("%-10d\n", a);
    
    printf("%010.d\n", a); 
    ft_printf("%010.d\n", a);
    
    printf("%10.d\n", a); 
    ft_printf("%10.d\n", a);


    return 0;
}
