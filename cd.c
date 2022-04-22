#include "minishell.h"

int	cd(int argc, char **argv)
{
	char	buf[4096];
	if (argc > 2)
	{
		write(1, "too many arguments\n", 20);
		return (1);
	}
	chdir(argv[1]);
	return (0);
}
