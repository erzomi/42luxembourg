#include "libft.h"

int	ft_isdigit(int i)
{
	while ('0' <= i && '9' > i)
	{
		return (1);
	}
	return (0);
}
