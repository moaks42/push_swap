

#include "push_swap.h"

int get_mode(char *argv1)
{
    if (ft_strncmp(argv1, "--bench"))
        return (BENCH);
    if (ft_strncmp(argv1, "--simple"))
        return (SIMPLE);
    if (ft_strncmp(argv1, "--medium"))
        return (MEDIUM);
    if (ft_strncmp(argv1, "--complex"))
        return (COMPLEX);
    if (ft_strncmp(argv1, "--adaptive"))
        return (ADAPTIVE);
    return (NO_FLAG);
}
