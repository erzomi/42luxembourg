#include <stdio.h>
#include "libft.h"

void            ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

/*int	main(void)
{
	char	str[] = "0bcdefg";

	printf("%s\n",str);
	ft_bzero(str, 6);
	printf("%s\n",str);
	return (0);
}*/
