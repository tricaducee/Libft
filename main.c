#include <stdlib.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

/*
int	main()
{
	printf("%s\n",(char *)ft_memchr("abcdefghijklmnopqrstuvwxyz", 'e', 10));
	return (0);
}*/

void test(char *param1, char *param2, size_t n)
{
	int max = ft_strlen(param1);;
	printf("normal func : %s\ttruc func : %s\n", strnstr(param1, param2, max), ft_strnstr(param1, param2, max));
}

int	main()
{
	test("AAAAAAAAAAA", "AAAAAAAAAAA", 15);
}
