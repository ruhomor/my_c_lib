
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*cuckoo;

	if (!(cuckoo = (char*)ft_memalloc(size + 1)))
		return (NULL);
	return (cuckoo);
}
