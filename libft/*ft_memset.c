/*#include "libft.h"*/
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr == (unsigned char)c;
		ptr++;
		n--;
	}
}

int main()
{
    // Define the size of the memory block
    size_t size = 10;

    // Define a static memory block
    char static_block[10];

    // Fill the static memory block with the value 65 ('A' in ASCII)
    ft_memset(static_block, 42, size);

    // Print the contents of the static memory block
    for (size_t i = 0; i < size; i++)
    {
        printf("%c ", static_block[i]);
    }

    return 0;
}
