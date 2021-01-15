#include "ft_printf.h"
#include <stdio.h>

int main()
{


    ft_printf("%0*.*d", 4, -2,-2147483648);



    return 0;
}
