#include "pipex.h"

int	ft_puterror(void)
{
	write(2, "Error\n", 6);
	return (-1);
}