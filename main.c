#include "ft_printf.h"
#include <stdio.h>

int main()
{
    unsigned int a = 123;

    printf("%-10.5u\n", a);
    ft_printf("%-10.5u\n", a);
    
    printf("%010.5u\n", a);
    ft_printf("%010.5u\n", a);
    
    printf("%10.5u\n", a);
    ft_printf("%10.5u\n", a);
    
    printf("%-10u\n", a);
    ft_printf("%-10u\n", a);
    
    printf("%010u\n", a); 
    ft_printf("%010u\n", a);
    
    printf("%10u\n", a); 
    ft_printf("%10u\n", a);


    return 0;
}
