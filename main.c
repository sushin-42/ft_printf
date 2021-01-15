#include "ft_printf.h"
#include <stdio.h>

int main()
{

    printf("%09s\n", "hi low");
    ft_printf("%09s\n", "hi low");
    printf("%2.9p\n", 1234);
    ft_printf("%2.9p\n", 1234);
    printf("%.5p\n", 0);
    ft_printf("%.5p\n", 0);





    return 0;
}
