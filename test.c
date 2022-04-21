/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:19:53 by smaegan           #+#    #+#             */
/*   Updated: 2022/04/21 18:34:57 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(void)
{
//	int		status;
	char	*s = "1";
//	int		fd;
//	int		cpid;
	//char	*argv[] = {"echo", "hello", "NULL1", NULL};
	//char	*envp[] = {NULL};
	char *cwd;

	while (s != NULL)
	{
		cwd = promt();
		s = readline(cwd);
		printf("%s\n", s);
		free(s);
	}
	return (0);
}

char	*promt(void)
{
	char	*cwd;
	char	buf[4096];
	int		i;

	cwd = getcwd(buf, 4096);
	i = ft_strlen(cwd);
	cwd[i] = ' ';
	cwd[i + 1] = '_';
	cwd[i + 2] = '$';
	cwd[i + 3] = ' ';
	cwd[i + 4] = '\0';
	return (cwd);
}
