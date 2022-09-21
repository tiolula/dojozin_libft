#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *casted_s1;
    unsigned char *casted_s2;
    
    casted_s1 = (unsigned char *)s1;
    casted_s2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (casted_s1[i] != casted_s2[i])
            return casted_s1[i] - casted_s2[i];
        i++;
    }
    return 0;
}