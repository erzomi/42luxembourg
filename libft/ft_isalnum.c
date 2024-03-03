#include "libft.h"

int	ft_isalnum(int	c)
{
	if ('a' <= c && 'z' >= c || 'A' <= c && 'Z' >= c || '0' <= c && '9' >= c)
	{
		return (1);
	}
	return (0);
}
