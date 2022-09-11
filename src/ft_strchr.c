#include <string.h>



char * ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || c == '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return ((char *) 0);
}
