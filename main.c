#include "ft_printf.h"
#include <stdio.h>

int main()
{
    unsigned int a = 122;

    printf("%-10.5X\n", a);
    ft_printf("%-10.5X\n", a);
    
    printf("%010.5X\n", a);
    ft_printf("%010.5X\n", a);
    
    printf("%10.5X\n", a);
    ft_printf("%10.5X\n", a);
    
    printf("%-10X\n", a);
    ft_printf("%-10X\n", a);
    
    printf("%010X\n", a); 
    ft_printf("%010X\n", a);
    
    printf("%10X\n", a); 
    ft_printf("%10X\n", a);



    return 0;
}
