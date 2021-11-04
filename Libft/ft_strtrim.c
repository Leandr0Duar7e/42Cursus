#include <stdlib.h>
#include "libft.h"

static int	checkset(char const *sets, char lt)
{
	int	i1;

	i1 = 0;
	while (sets[i1] != lt && sets[i1] != '\0')
		i1++;
	if (sets[i1] == lt)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int	itrim;
	int	ftrim;
	int	i2;

	i2 = 0;
	itrim = 0;
	ftrim = ft_strlen(s1);
	while (checkset(set, s1[i2]) && i2 < ftrim)
		i2++;
	if (i2 != ftrim)
		itrim = i2 + 1;
	i2 = ftrim - 1;
	while (checkset(set, s1[i2]) && i2 > itrim)
		i2--;
	if (i2 != itrim)
		ftrim = i2;
	res = malloc(sizeof(char) * (ftrim - itrim + 1));
	if (res == NULL)
		return (0);
	i2 = 0;
	while (itrim < ftrim)
		res[i2++] = s1[itrim++];
	res[i2] = '\0';
	return (res);
}
