#include <stddef.h>

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*little == '\0')
        return ((char *)big);
    while (i < len && big[i])
    {
        if (big[i] == little[0])
        {
            while (little[j])
            {
                if (big[i + j] != little[j])
                {   
                    j = 0;
                    break;
                }
                if (j == len - 1 || little[j + 1] == '\0')
                {
                    return ((char *)&big[i]);
                }
                j++;
            }
        }
        i++;
    }
    return ((char *) 0);
}
