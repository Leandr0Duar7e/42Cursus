#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int	i;

	i = 0;
	subs = malloc(sizeof(char) * len);
	if (subs == NULL)
		return (0);
	while (s[start]!= '\0' && len > 0)
	{
		subs[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (subs);
}

