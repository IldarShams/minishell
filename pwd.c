#include "minishell.h"

int	pwd(void)
{
	char	buf[4096];

	if (ft_putendl_fd(getcwd(buf, 4096), 1))
		return (0);
	return (1);
}