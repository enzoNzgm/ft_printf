#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello, %s!\n", "world");
	ft_printf("%u\n", -1);
	printf("%u\n", -1);
}
