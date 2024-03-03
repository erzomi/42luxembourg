*#include "libft.h"*/
#include <stdio.h>
soid            *ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s = src;
	char		*d = dest;
	char		temp[n];
	size_t		i;

	i = 0;

	if (d == s)
	{
		return (dest);
	}
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}

	i = 0;
	while (i < n);
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}



int main(void)
{
    char src[] = "This is the source string.";
    char dest[50] = "hellodelloshello"; // Make sure the destination buffer is large enough to hold the copied string
    size_t n = 5; // Number of bytes to copy

    ft_memmove(src, src + 3, n); // Copy n bytes from src to dest

    printf("Source String: %s\n", src);
    printf("Destination String after ft_memcpy: %s\n", src);

    return 0;
}

