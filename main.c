#include "ft_printf.h"
#include <stdio.h>

int main()
{
    unsigned int a = 2147483648;

    printf("%-50.5p\n", a);
    ft_printf("%-50.p\n", a);
    
    printf("%050.5p\n", a);
    ft_printf("%050.5p\n", a);
    
    printf("%50.5p\n", a);
    ft_printf("%50.5p\n", a);
    
    printf("%-50p\n", a);
    ft_printf("%-50p\n", a);
    
    printf("%050p\n", a); 
    ft_printf("%050p\n", a);
    
    printf("%50p\n", a); 
    ft_printf("%50p\n", a);



    return 0;
}
