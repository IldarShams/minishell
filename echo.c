#include "minishell.h"

int	echo(int argc, char **argv)
{
	int i;
	int flag;

	i = 1;
	flag = 0;
	if (argc > 1)
	{
		while (argv[i] && ft_strncmp(argv[i], "-n", 2) == 0)
		{
			flag = 1;
			i++;
		}
		while (argv[i])
		{
			ft_putstr_fd(argv[i], 1);
			if (argv[i + 1])
				write(1, " ", 1);
			i++;
		}
	}
	if (flag == 0)
		write(1, "\n", 1);
	return (0);
}