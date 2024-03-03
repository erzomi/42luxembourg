/*#include "libft.h"*/
#include <stdio.h>

void            *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char		*d = dest;
	const char	*s = src;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main(void){
    char src[] = "This is the source string.";
    char dest[50] = "hellodelloshello"; // Make sure the destination buffer is large enough to hold the copied string
    size_t n = 3; // Number of bytes to copy

    ft_memcpy(src, src + 3, n); // Copy n bytes from src to dest

    printf("Source String: %s\n", src);
    printf("Destination String after ft_memcpy: %s\n", src);

    return 0;
}
