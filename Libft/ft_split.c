#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libtf.h"

static char	*ft_strcpy2(char *dest, char *src, int j3, int i3)
{
	int	k;

	k = 0;
	while (j3 != i3)
	{
		dest[k] = src[j3];
		j3++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

static char	*ft_strdup2(char *src, int j2, int i2)
{
	char	*ptr;

	ptr = (char *)malloc((i2 - j2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strcpy2(ptr, src, j2, i2);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplit;
	int		i;
	int		j;
	int		si;

	i = 0;
	si = 0;
	ssplit = malloc(sizeof(*ssplit) * (ft_strlen(s) + 1));
	if (ssplit == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c  && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
		{
			*(ssplit + si) = ft_strdup2(str, j, i);
			si++;
		}
	}
	*(ssplit + si) = 0;
	return (ssplit);
}
