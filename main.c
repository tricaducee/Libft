#include <stdlib.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
/*
int	main()
{
	printf("%s\n",(char *)ft_memchr("abcdefghijklmnopqrstuvwxyz", 'e', 10));
	return (0);
}*/

int	main(int argc, char **argv)
{
	if (argc < 4)
	{
		printf("error");
		return (0);
	}

	printf("%s\n",(char *)ft_memchr(argv[1], *argv[2], atoi(argv[3])));
	return (0);
}
