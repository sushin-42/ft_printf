#include "ft_printf.h"
#include <stdio.h>

int main()
{
/*    unsigned int a = 123;

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
*/
    printf("%%\n");
    ft_printf("%%\n");
    printf("%10%\n");
    ft_printf("%10%\n");
    printf("%010%\n");
    ft_printf("%010%\n");
    printf("%-010%\n");
    ft_printf("%-010%\n");
     printf("%*%\n", 20);
    ft_printf("%*%\n", 20);



    return 0;
}
